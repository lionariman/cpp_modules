#include "Converter.hpp"

void convert(int ac, char **av)
{

    Converter *conv new Converter();

    try {
        if (ac != 2)
            conv->throwError();
    }
    catch (Converter::ConverterWrongArgNum &e) {
        std::cout << "* error was called *" << std::endl;
    }
    catch (std::exception const &e) {
        std::cout << e.what() << std::endl;
    }

    delete conv;
}

int main(int ac, char **av)
{
    convert(ac, av);
    return (0);
}