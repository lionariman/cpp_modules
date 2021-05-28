#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout << PINK << this->name + " is destroyed" << PINK << std::endl;
}

void Zombie::announce(void)
{
	std::cout << BLUE <<this->name +
	" (" + this->type + ") Braiiiiiiinnnssss..." << BLUE << std::endl;
}

void	Zombie::setRandZombieName(void)
{
	const int length = 10;

	std::string	names[length] = {
		"Marcellus", "Tawanna", "Jacklyn", "Eugene", "Mackenzie",
		"Nellie", "Veta", "Terresa", "Billye", "Brittani"
	};

	int index = std::rand() % length;
	this->name = names[index];
}

void	Zombie::setRandZombieType(void)
{
	const int length = 9;

	std::string	types[length] = {
		"happy", "angry", "dumb",
		"smart", "kind", "evil",
		"thin", "fat", "crazy"
	};

	int index = std::rand() % length;
	this->type = types[index];
}

std::string	Zombie::getZombieName(void)
{
	return this->name;
}
