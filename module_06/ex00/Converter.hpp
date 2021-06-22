#ifndef CPP_CONVERTER_HPP
# define CPP_CONVERTER_HPP

# include <iostream>
# include <sstream>

class Converter
{
private:
    Converter();
    std::string _av;

    char _typeChar;
    int _typeInt;
    float _typeFloat;
    double _typeDouble;

public:
    Converter(std::string av);
    ~Converter();
    Converter(Converter const &other);
    Converter &operator=(Converter const &other);

    class ConverterNoSuchTypeException : public std::exception {
        const char *what() const throw();
    };

    void makeChar();
    void makeInt();
    void makeFloat();
    void makeDouble();

    void makeIt();
};

#endif