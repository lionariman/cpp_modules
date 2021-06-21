#include "Converter.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return 1;
    }
    try
    {
        Converter conv(av[1]);
        conv.makeIt();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception (main): " << e.what() << '\n';
    }
    return (0);
}