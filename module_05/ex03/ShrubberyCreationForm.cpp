#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
    Form("ShrubberyCreationForm", 145, 137),
    _target(target),
    _fileName(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) :
    Form(other),
    _target(other._target),
    _fileName(other._fileName) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other) {
    (void)other;
    return *this;
}

const char *ShrubberyCreationForm::FormCannotCreateAFile::what() const throw() {
    return "ShrubberyCreationForm exception: cannot create a file for some reason";
}


void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    Form::execute(executor);
    if (this->getBsigned() == true) {

        std::ofstream ofst;
        ofst.open(_fileName);
        if (!ofst.is_open())
            throw FormCannotCreateAFile();

        std::string asciiTree = "      /\\\n"
                                "     /\\*\\\n"
                                "    /\\O\\*\\\n"
                                "   /*/\\/\\/\\\n"
                                "  /\\O\\/\\*\\/\\\n"
                                " /\\*\\/\\*\\/\\/\\\n"
                                "/\\O\\/\\/*/\\/O/\\\n"
                                "      ||\n"
                                "      ||\n"
                                "      ||\n";

        ofst << asciiTree;
        ofst.close();
    }
    else
        throw FormNotSignedException();
}

Form *ShrubberyCreationForm::clone(std::string const &target) const {
    return new ShrubberyCreationForm(target);
}