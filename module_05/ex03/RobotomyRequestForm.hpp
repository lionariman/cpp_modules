#ifndef CPP_ROBOTOMY_REQUEST_FROM_HPP
# define CPP_ROBOTOMY_REQUEST_FROM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    RobotomyRequestForm();
    std::string const _target;

public:
    RobotomyRequestForm(std::string const &target);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const &other);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

    void execute(Bureaucrat const &bureaucrat) const;
    Form *clone(std::string const &target) const;
};

#endif