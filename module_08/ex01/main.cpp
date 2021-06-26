#include "span.hpp"

void foo(void)
{
    std::srand(std::time(NULL));

    const int num(15);

    Span sp = Span(num);

    for (int i(0); i < num; i++)
    {
        sp.addNumber(std::rand() % 100);
        std::cout << GREEN << sp[i] << NCLR << ' ';
    }
    std::cout << std::endl;

    // sp.addNumber(std::rand() % 100);
    // std::cout << GREEN << sp[18] << NCLR << ' ';

    std::cout << YELLOW << "shortest span -> " << sp.shortestSpan() << NCLR << std::endl;
    std::cout << YELLOW << " longest span -> " << sp.longestSpan() << NCLR << std::endl;
}

int main(void)
{
    try
    {
        foo();
    }
    catch(const std::exception& e)
    {
        std::cerr << B_RED << e.what() << NCLR << '\n';
    }
    
    // while (1);

    return 0;
}