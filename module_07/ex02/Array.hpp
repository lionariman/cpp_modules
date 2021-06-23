#ifndef CPP_ARRAY_HPP
# define CPP_ARRAY_HPP

# include <iostream>

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