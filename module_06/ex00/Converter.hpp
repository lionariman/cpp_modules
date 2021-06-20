#ifndef CPP_CONVERTER_HPP
# define CPP_CONVERTER_HPP

# include <iostream>

class Converter
{
private:
public:
    Converter();
    ~Converter();
    Converter(Converter const &other);
    Converter &operator=(Converter const &other);

    class ConverterWrongArgNum : public std::exception {
        const char *what() const throw();
    }

    void type(std::string const &typeName);
    void throwError() const;
};

#endif