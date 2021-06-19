#include "Bureaucrat.hpp"
#include "PresidentalPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Bureaucrat boss("Boss", 1);
    std::cout << boss << std::endl;

    Intern someRandomIntern;

    std::cout << "<<<=====================================>>>" << std::endl;

    Form *rrf;

    try
    {
        rrf = someRandomIntern.makeForm("PresidentalPardonForm", "Linkoln");
        std::cout << *rrf << std::endl;
        boss.signForm(*rrf);
        std::cout << *rrf << std::endl;
        rrf->execute(boss);

        delete rrf;

        std::cout << "\n-----------\n" << std::endl;

        rrf = someRandomIntern.makeForm("Robotomy", "Bender");
        std::cout << *rrf << std::endl;
        boss.signForm(*rrf);
        std::cout << *rrf << std::endl;
        rrf->execute(boss);

        delete rrf;

        std::cout << "\n-----------\n" << std::endl;

        rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Elka");
        std::cout << *rrf << std::endl;
        boss.signForm(*rrf);
        std::cout << *rrf << std::endl;
        rrf->execute(boss);

        delete rrf;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "<<<=====================================>>>" << std::endl;

    // while (1);

    return (0);
}