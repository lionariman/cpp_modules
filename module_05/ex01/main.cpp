#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat jo("Jo", 100);
    Bureaucrat za("Za", 150);

    Form formZa("FormZa", 70, 50);
    std::cout << formZa;

    try
    {
        formZa.beSigned(za);
        std::cout << formZa;
        std::cout << jo;
        jo.incrementGrade();
        std::cout << jo;
        std::cout << za;
        za.incrementGrade();


        za.signForm(formZa);
        std::cout << formZa;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}