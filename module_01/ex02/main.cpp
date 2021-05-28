#include "ZombieEvent.hpp"

void	randomChump(ZombieEvent &zombieEventInstance)
{
	// random Zombie name
	std::string	newRandomZombieName;

	// random Zombie type
	std::string	newRandomZombieType;

	// get a random zombie name
	newRandomZombieName = zombieEventInstance.getRandName();

	// get a random zombie type
	newRandomZombieType = zombieEventInstance.getRandType();

	// set new zombie type inside the instance of a ZombieEvent Class
	zombieEventInstance.setZombieType(newRandomZombieType);

	// build a new instance of a Zombie Class and set inside it
	// a new random Zombie name
	Zombie	*zombieInstance;
	zombieInstance = zombieEventInstance.newZombie(newRandomZombieName);

	// Zombie talk
	zombieInstance->announce();

	// free memory allocation
	delete(zombieInstance);
}

int	main(void)
{
	const int	numOfZombies = 10;
	ZombieEvent zombieEventInstance = ZombieEvent();

	for (int i(0); i < numOfZombies; i++)
		randomChump(zombieEventInstance);

	return (0);
}
