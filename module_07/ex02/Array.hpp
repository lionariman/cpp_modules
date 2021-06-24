#ifndef CPP_ARRAY_HPP
# define CPP_ARRAY_HPP

# include <iostream>

# define NCLR        "\033[0m"
# define BLACK       "\033[0;30m"
# define WHITE       "\033[0;37m"
# define YELLOW      "\033[0;33m"
# define RED         "\033[0;31m"
# define GREEN       "\033[0;32m"
# define CYAN        "\033[0;36m"
# define BLUE        "\033[0;34m"
# define PURPLE      "\033[0;35m"
# define B_GRAY      "\033[1;30m"
# define B_WHITE     "\033[1;37m"
# define B_RED       "\033[1;31m"
# define B_YELLOW    "\033[1;33m"
# define B_GREEN     "\033[1;32m"
# define B_CYAN      "\033[1;36m"
# define B_BLUE      "\033[1;34m"
# define B_PURPLE    "\033[1;35m"

template <class T>
class Array
{
private:
    T *_array;
    size_t _n;

public:
    Array() : _array(nullptr), _n(0) {};

    Array(unsigned int n) {
        if (n == 0)
            _array = nullptr;
        else
            _array = new T[n];
        _n = n;
    };

    ~Array() {
        if (_array != nullptr)
            delete[] _array;
    };

    Array(Array const &other) {
        *this = other;
    };

    Array &operator=(Array const &other) {
        if (this == &other)
            return *this;
        delete[] _array;
        _array = new T[other._n];
        for (int i(0); i < (int)other._n; i++)
            _array[i] = other._array[i];
        _n = other._n;
        return *this;
    };

    class ArrIndexOutOfRange : public std::exception {
        const char *what() const throw() {
            return "Array exception: array index out of range";
        }
    };

    T &operator[](const int index) const {
        if (index > -1 && index < (int)_n)
            return _array[index];
        throw ArrIndexOutOfRange();
    }

    size_t getSize() const {
        return _n;
    }
};

#endif