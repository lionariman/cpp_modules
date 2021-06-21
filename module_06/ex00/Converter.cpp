#include "Converter.hpp"

Converter::Converter(std::string av) :
    _av(av),
    _typeChar(0),
    _typeInt(0),
    _typeFloat(0),
    _typeDouble(0) {}

Converter::~Converter() {}

Converter::Converter(Converter const &other) {
    *this = other;
}

Converter &Converter::operator=(Converter const &other) {
    if (this == &other)
        return *this;
    _av = other._av;
    _typeChar = other._typeChar;
    _typeInt = other._typeInt;
    _typeFloat = other._typeFloat;
    _typeDouble = other._typeDouble;
    return *this;
}

void Converter::castToTypeChar() {
    std::cout << "Char: ";
    try {

    }
    catch (std::exception &e) {
        std::cout << "impossible" << std::endl;
    }
}

const char *Converter::ConverterNoSuchTypeException::what() const throw() {
    return "Converter exception: there is no such type";
}

void Converter::whatTypeOfLiteral() {
    try
    {
        if (_av.length() == 1 && std::isalnum(_av[0]))
        {
            _typeChar = static_cast<char>(_av[0]);
            return ;
        }
        else if (std::stoi(_av) > 0 && std::stoi(_av) < 127)
        {
            _typeChar = static_cast<char>(std::stoi(_av));
            return ;
        }
        else
            throw ConverterNoSuchTypeException();
    }
    catch(ConverterNoSuchTypeException &e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

// void Converter::castToTypeInt() {

// }

// void Converter::castToTypeFloat() {

// }

// void Converter::castToTypeDouble() {

// }

void Converter::makeIt() {
    std::cout << " HELLO " << std::endl;
}