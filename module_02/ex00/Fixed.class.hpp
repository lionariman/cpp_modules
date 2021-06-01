#ifndef CPP_FIXED_CLASS_HPP
# define CPP_FIXED_CLASS_HPP

# define PINK "\x1b[35m"
# define BLUE "\x1b[34m"
# define GREEN "\x1b[32m"
# define CYAN "\x1b[36m"
# define RED "\x1b[31m"

# include <iostream>

class Fixed
{
	private:
		int	fixedPointValue;
		static const int	numberOfFractionalBits = 8;

	public:
		// a default constructor that initializes the fixed point of value to 0
		Fixed();
		// a destructor
		~Fixed();
		// a copy constructor
		Fixed(const Fixed &oldInstance);
		// an assignation operator overload
		Fixed	&operator=(const Fixed &oldInstance);
		// returns the raw value of the fixed point value
		int		getRawBits(void) const;
		// that sets the raw value of the fixed point value
		void	setRawBits(int const raw);
};

#endif