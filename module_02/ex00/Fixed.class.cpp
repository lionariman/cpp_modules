#include "Fixed.class.hpp"

Fixed::Fixed()
{
	this->fixedPointValue = 0;
	std::cout << GREEN << "Default constructor called" << GREEN << std::endl;
}

Fixed::~Fixed()
{
	std::cout << PINK << "Destructor called" << PINK << std::endl;
}

// a copy constructor
Fixed::Fixed(const Fixed &oldInstance)
{
	this->fixedPointValue = oldInstance.fixedPointValue;
	std::cout << GREEN << "Copy constructor called" << GREEN << std::endl;
}

// an assignation operator overload
Fixed	&Fixed::operator=(const Fixed &oldInstance)
{
	this->fixedPointValue = oldInstance.fixedPointValue;
	std::cout << GREEN << "Assignation operator called" << GREEN << std::endl;
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << BLUE << "getRawBits member function called" << BLUE << std::endl;
	return this->fixedPointValue;
}

void    Fixed::setRawBits(const int raw)
{
	this->fixedPointValue = raw;
}
