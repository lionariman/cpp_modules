#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) :
    _name(name),
    _grade(grade)
{
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &other) :
    _name(other._name),
    _grade(other._grade)
{
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other) {
    this->_grade = other._grade;
    return *this;
}

std::string const &Bureaucrat::getName() const { return _name; }

int Bureaucrat::getGrade() const { return _grade; }

void Bureaucrat::incrementGrade() {
    if (--_grade < 1)
        throw GradeTooHighException();
}
void Bureaucrat::decrementGrade() {
    if (++_grade > 150)
        throw GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Bureaucrat exception: too high grade!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat exception: too low grade";
}

void Bureaucrat::signForm(Form &form) {
    if (form.getBsigned() == true)
        std::cout << _name + " cannot sign " + form.getName() + " because it's already signed" << std::endl;
    else if (form.getSignGrade() < _grade)
        std::cout << _name + " cannot sign " + form.getName() + " because his grade is too low" << std::endl;
    else
        std::cout << _name + " signs " + form.getName() << std::endl;
    form.beSigned(*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat) {
    out << bureaucrat.getName() + ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return out;
}