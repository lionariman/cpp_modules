#ifndef CPP_FORM_HPP
# define CPP_FORM_HPP

# include <iostream>

class Form;

# include "Bureaucrat.hpp"

class Form
{
private:
    Form();
    std::string const _name; 
    int const _signGrade;
    int const _execGrade;
    bool _bsigned;

public:
    virtual ~Form();
    Form(std::string const &name, int const signGrade, int const execGrade);
    Form(Form const &other);
    Form &operator=(Form const &other);

    std::string const getName() const;
    int getSignGrade() const;
    int getExecGrade() const;
    bool getBsigned() const;

    class FormGradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };

    class FormGradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };

    class FormAlreadySignedException : public std::exception
    {
        const char *what() const throw();
    };

    class FormNotSignedException : public std::exception
    {
        const char *what() const throw();
    };

    void beSigned(Bureaucrat const &beaucrat);

    virtual void execute(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif