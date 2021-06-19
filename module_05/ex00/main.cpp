#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat jo("Jo", 100);
    Bureaucrat za("Za", 150);

    try
    {
        std::cout << jo;
        jo.incrementGrade();
        std::cout << jo;
        std::cout << za;
        
        Bureaucrat newJo(jo);
        std::cout << newJo;
        newJo.incrementGrade();
        std::cout << newJo;
        newJo.decrementGrade();
        std::cout << newJo;

        Bureaucrat *newZa = new Bureaucrat(za);
        std::cout << *newZa;
        newZa->decrementGrade();
        std::cout << *newZa;

        delete newZa;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}