#ifndef CPP_CONVERTER_HPP
# define CPP_CONVERTER_HPP

# include <iostream>

class Converter
{
private:
    Converter();
    std::string _av;

    char _typeChar;
    int _statusOfChar = 1;

    int _typeInt;
    int _statusOfInt = 2;

    float _typeFloat;
    int _statusOfFloat = 3;
    
    double _typeDouble;
    int _statusOfDouble = 4;

public:
    Converter(std::string av);
    ~Converter();
    Converter(Converter const &other);
    Converter &operator=(Converter const &other);

    class ConverterNoSuchTypeException : public std::exception {
        const char *what() const throw();
    }

    void whatTypeOfLiteral();

    void castToTypeChar();
    // void castToTypeInt();
    // void castToTypeFloat();
    // void castToTypeDouble();

    void makeIt();
};

#endif