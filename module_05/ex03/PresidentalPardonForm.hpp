#ifndef CPP_PRESIDENTAL_PARDON_FORM_HPP
# define CPP_PRESIDENTAL_PARDON_FORM_HPP

# include "Form.hpp"

class PresidentalPardonForm : public Form
{
private:
    PresidentalPardonForm();
    std::string const _target;

public:
    PresidentalPardonForm(std::string const &target);
    virtual ~PresidentalPardonForm();
    PresidentalPardonForm(PresidentalPardonForm const &other);
    PresidentalPardonForm &operator=(PresidentalPardonForm const &other);

    void execute(Bureaucrat const &executor) const;
    Form *clone(std::string const &target) const;
};

#endif