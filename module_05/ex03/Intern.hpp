#ifndef CPP_INTERN_HPP
# define CPP_INTERN_HPP

# include "PresidentalPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
private:
    Form *_forms[3];

public:
    Intern();
    ~Intern();
    Intern(Intern const &other);
    Intern &operator=(Intern const &other);

    Form *makeForm(std::string const &formName, std::string const &formTarget) const;

    class InternDoesNotExistSuchForm : public std::exception
    {
        const char *what() const throw();
    };
};

#endif