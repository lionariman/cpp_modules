#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
    Form("RobotomyRequestForm", 72, 45),
    _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) :
    Form(other),
    _target(other._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other) {
    (void)other;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    int randNum = std::rand() % 100;

    Form::execute(executor);
    if (getBsigned() == true)
    {
        if (randNum < 50)
            std::cout << this->_target + " has been robotomized successfully." << std::endl;
        else
            std::cout << this->_target + " robotomized is failure." << std::endl;
    }
    else
        throw FormNotSignedException();
}

Form *RobotomyRequestForm::clone(std::string const &target) const {
    return new RobotomyRequestForm(target);
}