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

const char *Converter::ConverterNoSuchTypeException::what() const throw() {
    return "Converter exception: there is no such type";
}

void Converter::makeChar() {
    std::cout << "Char: ";
    try
    {
        if (_av.length() == 1 && !std::isdigit(_av[0]))
            _typeChar = static_cast<char>(_av[0]);
        else if (std::stoi(_av) >= 0 && std::stoi(_av) <= 127)
            _typeChar = static_cast<char>(std::stoi(_av));
        else
            throw std::invalid_argument("Argument error");
        if (std::isprint(_typeChar))
            std::cout << "'" << _typeChar << "'" << std::endl;
        else
            std::cout << "non displayable" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "impossible" << std::endl;
    }
}

void Converter::makeInt() {
    std::cout << "Int: ";
    try
    {
        if (_av.length() == 1 && !std::isdigit(_av[0]) && std::isprint(_av[0]))
            _typeInt = static_cast<int>(_av[0]);
        else if (_av.length() >= 1)
            _typeInt = static_cast<int>(std::stoi(_av));
        else
            throw std::invalid_argument("Argument error");
        std::cout << _typeInt << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "impossible" << std::endl;
    }
}

void Converter::makeFloat() {
    std::stringstream ss;
    std::string line;
    size_t pos;

    std::cout << "Float: ";
    try
    {
        if (_av.length() == 1 && !std::isdigit(_av[0]) && std::isprint(_av[0]))
            _typeFloat = static_cast<float>(_av[0]);
        else if (_av.length() >= 1)
            _typeFloat = static_cast<float>(std::stof(_av));
        else
            throw std::invalid_argument("Argument error");

        if (_av.substr(0, 3) == "nan" || _av.substr(0, 3) == "inf" ||
            _av.substr(0, 4) == "-nan" || _av.substr(0, 4) == "+nan" ||
            _av.substr(0, 4) == "+inf" || _av.substr(0, 4) == "-inf")
            std::cout << _typeFloat << "f" << std::endl;
        else
        {
            ss << _typeFloat;
            line = ss.str();

            pos = line.find('.');
            if (pos != line.npos)
                std::cout << _typeFloat << "f" << std::endl;
            else
                std::cout << _typeFloat << ".0f" << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "impossible" << std::endl;
    }
}

void Converter::makeDouble() {
    std::stringstream ss;
    std::string line;
    size_t pos;

    std::cout << "Double: ";
    try
    {
        if (_av.length() == 1 && !std::isdigit(_av[0]) && std::isprint(_av[0]))
            _typeDouble = static_cast<double>(_av[0]);
        else if (_av.length() >= 1)
            _typeDouble = static_cast<double>(std::stod(_av));
        else
            throw std::invalid_argument("Argument error");

        if (_av.substr(0, 3) == "nan" || _av.substr(0, 3) == "inf" ||
            _av.substr(0, 4) == "-nan" || _av.substr(0, 4) == "+nan" ||
            _av.substr(0, 4) == "+inf" || _av.substr(0, 4) == "-inf")
            std::cout << _typeFloat << std::endl;
        else
        {
            ss << _typeDouble;
            line = ss.str();

            pos = line.find('.');
            if (pos != line.npos)
                std::cout << _typeDouble << std::endl;
            else
                std::cout << _typeDouble << ".0" << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "impossible" << std::endl;
    }
}

void Converter::makeIt() {
    makeChar();
    makeInt();
    makeFloat();
    makeDouble();
}