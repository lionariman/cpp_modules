#include "PresidentalPardonForm.hpp"

PresidentalPardonForm::PresidentalPardonForm(std::string const &target) :
    Form("Presidental Pardon Form", 25, 5),
    _target(target) {}

PresidentalPardonForm::~PresidentalPardonForm() {}

PresidentalPardonForm::PresidentalPardonForm(PresidentalPardonForm const &other) :
    Form(other),
    _target(other._target) {}

PresidentalPardonForm &PresidentalPardonForm::operator=(PresidentalPardonForm const &other) {
    (void)other;
    return *this;
}

void PresidentalPardonForm::execute(Bureaucrat const &executor) const {
    Form::execute(executor);
    if (getBsigned() == true)
            std::cout << _target + " has been pardoned by Zafod Beeblebrox" << std::endl;
    else
        throw FormNotSignedException();
}