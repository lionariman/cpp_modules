#ifndef CPP_AWESOME_HPP
# define CPP_AWESOME_HPP

# include <iostream>

class Awesome
{
public:
    Awesome(int n) : _n(n) {}

    bool operator == (Awesome const &rhs) const
    {
        return (this->_n == rhs._n);
    }

    bool operator != (Awesome const &rhs) const
    {
        return (this->_n != rhs._n);
    }

    bool operator > (Awesome const &rhs) const
    {
        return (this->_n > rhs._n);
    }

    bool operator < (Awesome const &rhs) const
    {
        return (this->_n < rhs._n);
    }

    bool operator >= (Awesome const &rhs) const
    {
        return (this->_n >= rhs._n);
    }

    bool operator <= (Awesome const &rhs) const
    {
        return (this->_n <= rhs._n);
    }

    int getInt() const
    {
        return this->_n;
    }

private:
    int _n;
};

#endif