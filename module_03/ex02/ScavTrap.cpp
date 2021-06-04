#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(std::string name) {
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

// set default parameter for each field exept name
void ScavTrap::setDefaultValues(void) {
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

// ========================= getters ===========================
std::string ScavTrap::getName(void) {
	return this->name;
}

int ScavTrap::getHitPoints(void) {
	return this->hitPoints;
}

int ScavTrap::getEnergyPoints(void) {
	return this->energyPoints;
}
// ========================= getters ===========================

// ========================= setters ===========================
void ScavTrap::setName(std::string value) {
	this->name = value;
}
// ========================= setters ===========================

void ScavTrap::rangedAttack(std::string const &target) {
	std::cout << CYAN << "SC4V-TP " + this->name + " attacks " +
	target + " at range, causing " << this->rangedAttackDamage
	<< " points of damage!" << CYAN << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target) {
	std::cout << CYAN << "SC4V-TP " + this->name + " attacks " +
	target + " at melee, causing " << this->meleeAttackDamage
	<< " points of damage!" << CYAN << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount - this->armorDamageReduction;
	if (this->hitPoints < 0) {
		this->hitPoints = 0;
	}
	std:: cout << PINK << this->name + " takes "
	<< amount << " points of damage" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	if (this->hitPoints > this->maxEnergyPoints) {
		amount -= this->hitPoints - this->maxHitPoints;
		this->hitPoints = this->maxEnergyPoints;
	}
	std::cout << GREEN << this->name + " is repaired for "
	<< amount << " hit points" << GREEN << std::endl;
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