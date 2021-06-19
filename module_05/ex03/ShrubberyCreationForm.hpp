#ifndef CPP_SHRUBBERY_CREATION_FORM_HPP
# define CPP_SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
    ShrubberyCreationForm();
    std::string const _target;
    std::string _fileName;

public:
    ShrubberyCreationForm(std::string const &target);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const &other);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

    class FormCannotCreateAFile : public std::exception
    {
        const char *what() const throw();
    };

    void execute(Bureaucrat const &executor) const;
    Form *clone(std::string const &target) const;
};

#endif