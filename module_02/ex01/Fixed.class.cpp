#include "Fixed.class.hpp"

Fixed::Fixed() {
	this->fixedPointValue = 0;
	std::cout << CYAN << "Default constructor called" << CYAN << std::endl;
}

Fixed::~Fixed() {
	std::cout << CYAN << "Destructor called" << CYAN << std::endl;
}

Fixed::Fixed(const Fixed &oldFixedInstance) {
	std::cout << BLUE << "Copy constructor called" << BLUE << std::endl;
	this->fixedPointValue = oldFixedInstance.getRawBits();
}

Fixed	&Fixed::operator=(const Fixed &oldFixedInstance) {
	std::cout << BLUE << "Assignation operator called" << BLUE << std::endl;
	this->fixedPointValue = oldFixedInstance.getRawBits();
	return *this;
}

Fixed::Fixed(const int intNumber) {
	std::cout << GREEN << "Int constructor called" << GREEN << std::endl;
	this->fixedPointValue = intNumber << this->numberOfFractionalBits;
}

/*

To convert from floating-point to fixed-point, we follow this algorithm:

1. Calculate x = floating_input * 2^(fractional_bits)
2. Round x to the nearest whole number (e.g. round(x))
3. Store the rounded x in an integer container

*/

Fixed::Fixed(const float floatNumber) {
	std::cout << PINK << "Float constructor called" << PINK << std::endl;

	int power(1);
	for (int i(0); i < this->numberOfFractionalBits; i++)
		power *= 2;
	this->fixedPointValue = std::roundf(floatNumber * power);
}

/*

Converting from fixed-point to floating-point is straightforward.
We take the input value and divide it by (2fractional_bits)

*/

float	Fixed::toFloat(void) const {
	int power(1);
	for (int i(0); i < this->numberOfFractionalBits; i++)
		power *= 2;
	return (float)this->fixedPointValue / (float)power;
}

int	Fixed::toInt(void) const {
	return this->fixedPointValue >> this->numberOfFractionalBits;
}

std::ostream	&operator<<(std::ostream &outputStream, const Fixed &oldFixedInstance) {
	outputStream << oldFixedInstance.toFloat();
	return outputStream;
}

int Fixed::getRawBits(void) const {
	// std::cout << BLUE << "getRawBits member function called" << BLUE << std::endl;
	return this->fixedPointValue;
}

void    Fixed::setRawBits(const int raw) {
	// std::cout << BLUE << "setRawBits member function called" << BLUE << std::endl;
	this->fixedPointValue = raw;
}
