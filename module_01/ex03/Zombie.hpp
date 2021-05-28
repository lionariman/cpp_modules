#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

# define PINK "\x1b[35m"
# define BLUE "\x1b[34m"
# define GREEN "\x1b[32m"
# define CYAN "\x1b[36m"
# define RED "\x1b[31m"

class Zombie
{
	private:
		std::string name;
		std::string type;

	public:
		Zombie(void);
		~Zombie();

		void	announce(void);
		void	setRandZombieName(void);
		void	setRandZombieType(void);
		std::string	getZombieName(void);
};

#endif
