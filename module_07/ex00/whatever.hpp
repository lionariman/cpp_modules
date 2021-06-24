#ifndef CPP_WHATEVER_HPP
# define CPP_WHATEVER_HPP

# include <iostream>

template <class T>
void swap(T &a, T &b)
{
    T x(a);

    a = b;
    b = x;
}

template <class T>
T min(T a, T b)
{
    return ((a >= b) ? b : a);
}

template <class T>
T max(T a, T b)
{
    return ((a <= b) ? b : a);
}

#endif