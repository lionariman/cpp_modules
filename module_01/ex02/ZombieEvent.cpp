#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {}
ZombieEvent::~ZombieEvent() {}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie* zombie = new(std::nothrow) Zombie(name, this->type);
	if (zombie == NULL)
		return (NULL);
	return (zombie);
}

std::string	ZombieEvent::getRandName(void)
{
	const int length = 10;

	std::string	names[length] = {
		"Marcellus", "Tawanna", "Jacklyn", "Eugene", "Mackenzie",
		"Nellie", "Veta", "Terresa", "Billye", "Brittani"
	};

	int index = std::rand() % length;
	return (names[index]);
}

std::string	ZombieEvent::getRandType(void)
{
	const int length = 9;

	std::string	types[length] = {
		"happy", "angry", "dumb",
		"smart", "kind", "evil",
		"thin", "fat", "crazy"
	};

	int index = std::rand() % length;
	return (types[index]);
}
