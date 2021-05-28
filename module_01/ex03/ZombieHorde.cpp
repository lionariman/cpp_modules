#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	this->zombies = new Zombie[n];
	for (int i(0); i < n; i++)
	{
		this->zombies[i].setRandZombieName();
		this->zombies[i].setRandZombieType();
		std::cout << GREEN << this->zombies[i].getZombieName() +
				" is builded" << GREEN << std::endl;
	}
	std::cout << CYAN << "Zombies are builded" << CYAN << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->zombies;
	std::cout << RED << "All zombies are destroyed" << RED << std::endl;
}

Zombie*	ZombieHorde::getZombieHorde(void)
{
	return this->zombies;
}
