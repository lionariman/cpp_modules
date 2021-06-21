#ifndef CPP_CONVERTER_HPP
# define CPP_CONVERTER_HPP

# include <iostream>

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

    void castToTypeChar();
    // void castToTypeInt();
    // void castToTypeFloat();
    // void castToTypeDouble();

    void makeIt();
};

#endif