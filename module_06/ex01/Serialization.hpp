#ifndef CPP_SERIALIZATION_HPP
# define CPP_SERIALIZATION_HPP

# include <iostream>

struct Data
{
    std::string str1;
    int number;
    std::string str2;
};

class Serialization
{
protected:
    std::string getRandStr();
    int getRandInt();

public:
    Serialization();
    ~Serialization();
    Serialization(Serialization const &other);
    Serialization &operator=(Serialization const &other);

    void *serialize();
    Data *deserialize(void *raw);
};

#endif