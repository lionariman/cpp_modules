#include "span.hpp"

Span::Span(unsigned int count) : _len(count), _counter(0) {}

Span::~Span() {}

Span::Span(Span const &other) { *this = other; }

Span &Span::operator=(Span const &other)
{
    if (this == &other)
        return *this;
    this->_array = other._array;
    this->_len = other._len;
    return *this;
}

Span::ExceptionCallErrMsg::ExceptionCallErrMsg(char const *msg)
{
    this->message = msg;
}

Span::ExceptionCallErrMsg::~ExceptionCallErrMsg() throw() {}

const char *Span::ExceptionCallErrMsg::what() const throw()
{
    return this->message;
}

void Span::addNumber(unsigned int num)
{
    if (this->_array.size() + 1 > this->_len)
        throw ExceptionCallErrMsg("oops... there's no place in array");
    this->_array.push_back(num);
}

unsigned int Span::shortestSpan()
{
    if (this->_array.size() < 2)
        throw ExceptionCallErrMsg("too few elements");
    std::sort(this->_array.begin(), this->_array.end());
    return *this->_array.begin();
}

unsigned int Span::longestSpan()
{
    if (this->_array.size() < 2)
        throw ExceptionCallErrMsg("too few elements");
    std::sort(this->_array.begin(), this->_array.end());
    return *(this->_array.end() - 1);
}

unsigned int &Span::operator[](int const x)
{
    if (x > -1 && x < static_cast<int>(this->_len))
        return this->_array[x];
    throw ExceptionCallErrMsg("the number is not found");
}