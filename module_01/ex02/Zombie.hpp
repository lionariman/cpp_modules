#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

# define PINK "\x1b[35m"
# define BLUE "\x1b[34m"
# define GREEN "\x1b[32m"

class Zombie
{
	private:
	std::string name;
	std::string type;
	Zombie(void);

	public:
	Zombie(std::string name, std::string type);
	~Zombie();
	void	announce(void);
};

#endif