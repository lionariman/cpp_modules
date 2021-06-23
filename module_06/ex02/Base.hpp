#ifndef CPP_BASE_HPP
# define CPP_BASE_HPP

# include <iostream>

class Base
{
public:
    virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

#endif