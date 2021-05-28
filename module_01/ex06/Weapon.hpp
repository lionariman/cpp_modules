#ifndef WEAPON_CPP
# define WEAPON_CPP

# include <iostream>

# define PINK "\x1b[35m"
# define BLUE "\x1b[34m"
# define GREEN "\x1b[32m"
# define CYAN "\x1b[36m"
# define RED "\x1b[31m"

class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(std::string weapon);
		~Weapon();
		std::string	getType(void);
		void		setType(const std::string type);
};

#endif