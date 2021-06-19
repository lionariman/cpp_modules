#include "Bureaucrat.hpp"
#include "PresidentalPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    Bureaucrat jo("Jo", 100);
    std::cout << jo << std::endl;
    Bureaucrat za("Za", 50);
    std::cout << za << std::endl;
    Bureaucrat mister("Mister", 20);
    std::cout << mister << std::endl;

    PresidentalPardonForm *president = new PresidentalPardonForm("Putin");
    std::cout << *president << std::endl;
    ShrubberyCreationForm *tree = new ShrubberyCreationForm("Palm");
    std::cout << *tree << std::endl;
    RobotomyRequestForm *roboto = new RobotomyRequestForm("Terminator");
    std::cout << *roboto << std::endl;

    std::cout << "<=========================================>" << std::endl;
    try
    {
        mister.signForm(*roboto);
        roboto->execute(mister);

        delete roboto;        
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "<=========================================>" << std::endl;
    try
    {
        za.signForm(*tree);
        tree->execute(za);

        delete tree;
        
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "<=========================================>" << std::endl;
    try
    {
        jo.signForm(*president);
        president->execute(jo);

        delete president;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}