#include "Form.hpp"

Form::Form(std::string const &name, int const signGrade, int const execGrade) :
    _name(name),
    _signGrade(signGrade),
    _execGrade(execGrade),
    _bsigned(false)
{
    if (_signGrade < 1 || _execGrade < 1)
        throw FormGradeTooHighException();
    else if (_signGrade > 150 || _execGrade > 150)
        throw FormGradeTooHighException();
}

Form::~Form() {}

Form::Form(Form const &other) :
    _name(other._name),
    _signGrade(other._signGrade),
    _execGrade(other._execGrade),
    _bsigned(other._bsigned)
{
    if (_signGrade < 1 || _execGrade < 1)
        throw FormGradeTooHighException();
    else if (_signGrade > 150 || _execGrade > 150)
        throw FormGradeTooHighException();
}

Form &Form::operator=(Form const &other) {
    _bsigned = other._bsigned;
    return *this;
}

std::string const Form::getName() const { return _name; }

int Form::getSignGrade() const { return _signGrade; }

int Form::getExecGrade() const { return _execGrade; }

bool Form::getBsigned() const { return _bsigned; }

const char *Form::FormGradeTooHighException::what() const throw() {
    return "Form exception: grade is too high";
}

const char *Form::FormGradeTooLowException::what() const throw() {
    return "Form exception: grade is too low";
}

const char *Form::FormAlreadySignedException::what() const throw() {
    return "Form exception: form is already signed";
}

const char *Form::FormNotSignedException::what() const throw() {
    return "Form exception: form is not signed";
}

void Form::beSigned(Bureaucrat const &bureaucrat) {
    if (bureaucrat.getGrade() <= _signGrade)
        _bsigned = true;
    else if (_bsigned == true)
        throw FormAlreadySignedException();
    else if (bureaucrat.getGrade() > _signGrade ) {
        throw FormGradeTooHighException();
    }
}

void Form::execute(Bureaucrat const &executor) const {
    if (getBsigned() == false)
        throw FormNotSignedException();
    else if (getExecGrade() < executor.getGrade())
        throw FormGradeTooHighException();
}

std::ostream &operator<<(std::ostream &out, Form const &form) {
    out << "Form name: " + form.getName() << std::endl;
    if (form.getBsigned() == true)
        out << "* " + form.getName() + " is signed *" << std::endl;
    else
        out << "* " + form.getName() + " is not signed *" << std::endl;
    return out;
}
