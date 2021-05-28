#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

# include "Zombie.hpp"

class ZombieHorde
{
	private:
		Zombie*		zombies;

	public:
		ZombieHorde(const int n);
		~ZombieHorde();
		Zombie* getZombieHorde(void);
};

#endif