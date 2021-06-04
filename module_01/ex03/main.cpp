#include "ZombieHorde.hpp"

void	hordeAnnounce(Zombie *zombies, const int numOfZombies)
{
	for (int i(0); i < numOfZombies; i++)
		zombies[i].announce();
}

int	main(void)
{
	const int	numOfZombies = 10;

	// first step: we should create N number of zombies
	ZombieHorde horde(numOfZombies);

	// assign the pointer of ZombieHorde to zombies
	Zombie *zombies;
	zombies = horde.getZombieHorde();

	// print messages fo each zombie
	hordeAnnounce(zombies, numOfZombies);

	return (0);
}
