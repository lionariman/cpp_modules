#include "Converter.hpp"

Converter::Converter() {}

Converter::~Converter() {}

Converter::Converter(Converter const &other) {}

Converter &Converter::operator=(Converter const &other) {}

const char *Converter::ConverterWrongArgNum::what() const throw() {
    return "Converter exception: wrong number of arguments";
}

void Converter::type(std::strinrg cont &typeName) {}

void Converter::throwError() const {
    throw ConverterWrongArgNum();
}
