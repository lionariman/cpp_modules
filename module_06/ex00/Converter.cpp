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

// void Converter::castToTypeInt() {

// }

// void Converter::castToTypeFloat() {

// }

// void Converter::castToTypeDouble() {

// }

void Converter::makeIt() {
    std::cout << " HELLO " << std::endl;
}