#include "Converter.hpp"

Converter::Converter() {
    std::cout << "* Converter is created *\n" << std::endl;
}

Converter::~Converter() {
    std::cout << "* Converter has been closed *\n" << std::endl;
}

Converter::Converter(Converter const &other) {
    (void)other;
}

Converter &Converter::operator=(Converter const &other) {
    (void)other;
    return *this;
}

const char *Converter::ConverterWrongArgNum::what() const throw() {
    return "Converter exception: wrong number of arguments";
}

void Converter::throwError() const {
    throw ConverterWrongArgNum();
}

void Converter::valueTypeChecking(std::string const &value) {

}

void Converter::parseTypeChar(std::string const &value) {

}

void Converter::parseTypeInt(std::string const &value) {

}

void Converter::parseTypeFloat(std::string const &value) {

}

void Converter::parseTypeDouble(std::string const &value) {

}
