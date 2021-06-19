#include "Intern.hpp"

Intern::Intern() {
    _forms[0] = new PresidentalPardonForm("nameless");
    _forms[1] = new ShrubberyCreationForm("nameless");
    _forms[2] = new RobotomyRequestForm("nameless");
}

Intern::~Intern() {
    for (int i(0); i < 3; i++)
        delete _forms[i];
}

Intern::Intern(Intern const &other) {
    *this = other;
}

Intern &Intern::operator=(Intern const &other) {
    for (int i(0); i < 3; i++) {
        delete _forms[i];
        _forms[i] = other._forms[i]->clone(_forms[i]->getName());
    }
    return *this;
}

Form *Intern::makeForm(std::string const &formName, std::string const &formTarget) const {
    for (int i(0); i < 3; i++)
        if (formName == _forms[i]->getName())
            return _forms[i]->clone(formTarget);
    throw InternDoesNotExistSuchForm();
    return nullptr;
}

const char *Intern::InternDoesNotExistSuchForm::what() const throw() {
    return "Intern exception: the form does not exist";
}