#ifndef CPP_ITER_HPP
# define CPP_ITER_HPP

# include <iostream>

template<class T1, class T2, class T3>
void iter(T1 &buf, T2 bufLength, T3 (&func)(T3 i))
{
    for (int i(0); i < bufLength; i++)
    {
        buf[i] = func(buf[i]);
    }
}

#endif