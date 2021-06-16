#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) :
    _name(name),
    _grade(grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &other) { *this = other; }

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other) {
    this->_name = other->_name;
    this->_grade = other->_grade;
    return *this;
}

std::string const &Bureaucrat::getName() const { return _name; }
int Bureaucrat::getGrade() const { return _grade; }

void Bureaucrat::incrementGrade() {
    if (--_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}
void Bureaucrat::decrementGrade() {
    (++_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}