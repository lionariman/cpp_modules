#ifndef CPP_ITER_HPP
# define CPP_ITER_HPP

# include <iostream>

template<typename T>
void iter(T *buf, int len, void (func)(T const &x))
{
    for (int i(0); i < len; i++)
    {
        func(buf[i]);
    }
}

#endif