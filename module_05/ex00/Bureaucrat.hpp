#ifndef CPP_BUREAUCRAT_HPP
# define CPP_BUREAUCRAT_HPP

# include <iostream>

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define ENDC "\x1B[0m"
# define PURPLE "\x1B[35m"
# define SKYBLUE "\x1B[36m"
# define YELLOW "\x1B[33m"
# define BLUE "\x1B[34m"

class Bureaucrat
{
private:
    Bureaucrat();
    std::string const _name;
    int _grade;

public:
    Bureaucrat(std::string const &name, int grade);
    virtual ~Bureaucrat();
    Bureaucrat(Bureaucrat const &other);
    Bureaucrat &operator=(Bureaucrat const &other);

    std::string &getName() const;
    int getGrade() const;

    void incrementGrade();
    void decrementGrade();

    class GradeTooHighException : public exception
    {
        const char *what();
    };

    class GradeTooLowException : public exception
    {
        const char *what();
    };
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif