#ifndef CPP_CONVERTER_HPP
# define CPP_CONVERTER_HPP

# include <iostream>

class Converter
{
public:
    Converter();
    ~Converter();
    Converter(Converter const &other);
    Converter &operator=(Converter const &other);

    class ConverterWrongArgNum : public std::exception {
        const char *what() const throw();
    };

    void throwError() const;

    void valueTypeChecking(std::string const &value);
    void parseTypeChar(std::string const &value);
    void parseTypeInt(std::string const &value);
    void parseTypeFloat(std::string const &value);
    void parseTypeDouble(std::string const &value);
};

#endif