#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class Brain
{
	public:
		Brain();
		~Brain();
		std::string	identify(void);
		std::string	getStrFromInt(int number);
};

#endif