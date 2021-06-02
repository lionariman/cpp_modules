#ifndef CPP_FIXED_CLASS_HPP
# define CPP_FIXED_CLASS_HPP

# define PINK "\x1b[35m"
# define BLUE "\x1b[34m"
# define GREEN "\x1b[32m"
# define CYAN "\x1b[36m"
# define RED "\x1b[31m"

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	fixedPointValue;
		static const int numberOfFractionalBits = 8;


	public:
		// a default constructor.
		Fixed();

		// a default destructor.
		~Fixed();
		
		// a copy constructor.
		Fixed(const Fixed &oldFixedInstance);

		// an assignation operator overload
		Fixed &operator=(const Fixed &oldFixedInstance);

		// a constructor that takes a constant integer as a parameter
		// and that converts it to the correspond fixed(8) point value.
		Fixed(const int intNumber);

		// a constructor that takes a constant floating point as a parameter
		// and that converts it to the correspond fixed(8) point value.
		Fixed(const float floatNumber);

		// this function converts the fixed point value to
		// a floating point value.
		float toFloat(void) const;

		// this function converts the the fixed point value to
		// an integer value.
		int toInt(void) const;

		// returns the raw value of the fixed point value
		int getRawBits(void) const;

		// that sets the raw value of the fixed point value
		void setRawBits(int const raw);

};

	// an overload to the << operator that inserts a floating point representation
	// of the pixed point value into the parameter output stream.
	std::ostream &operator<<(std::ostream &outputStream, const Fixed &oldFixedInstance);

#endif