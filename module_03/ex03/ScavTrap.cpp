#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->name = name;

	const int length(3);
	std::string msgs[length] = {
		" was just born",
		" escaped from the factory",
		" has been updated"
	};

	int index = std::rand() % length;

	std::cout << BLUE << this->name << msgs[index] << BLUE << std::endl;
	this->setDefaultValues();
}

ScavTrap::ScavTrap(const ScavTrap &fragTrapInstance) {
	const int length(3);
	std::string msgs[length] = {
		" was just born",
		" escaped from the factory",
		" has been updated"
	};

	int index = std::rand() % length;

	std::cout << BLUE << this->name << msgs[index] << BLUE << std::endl;
	*this = fragTrapInstance;
}

ScavTrap::~ScavTrap() {
	const int length(3);
	std::string msgs[length] = {
		" was destroyed by laser",
		" lost his mind",
		" was riddled with bullets"
	};

	int index = std::rand() % length;

	std::cout << RED << this->name << msgs[index] << RED << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &fragTrapInstance) {
	*this = fragTrapInstance;
	return *this;
}

void ScavTrap::challengeNewscomer() {
	const int eventNum(10);

	std::string typeOfEvents[eventNum] = {
		"We got a badass here!", "Badass on the way!", "Badass incoming!",
		"Heads up! Incoming badass!", "Look out! Badass!", "Target acquired! It's a badass!",
		"Badass! Lock 'n load!", "We've got a badass incoming!", "BADASS!", "Got a badass here!"
	};

	int ev = std::rand() % eventNum;
	std::cout << PINK << this->name + ": " + typeOfEvents[ev] << PINK << std::endl;
}