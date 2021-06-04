#include "FragTrap.hpp"

FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string name) {
	this->name = name;

	const int length(3);
	std::string msgs[length] = {
		" was created from scrap metal",
		" was assembled at the factory",
		" was created by the leader of the machines"
	};

	int index = std::rand() % length;

	std::cout << BLUE << this->name << msgs[index] << BLUE << std::endl;
	this->setDefaultValues();
}

FragTrap::FragTrap(const FragTrap &fragTrapInstance) {
	const int length(3);
	std::string msgs[length] = {
		" was created from scrap metal",
		" was assembled at the factory",
		" was created by the leader of the machines"
	};

	int index = std::rand() % length;

	std::cout << BLUE << this->name << msgs[index] << BLUE << std::endl;
	*this = fragTrapInstance;
}

FragTrap::~FragTrap() {
	const int length(3);
	std::string msgs[length] = {
		" was stricken with rust",
		" had a system failure",
		" was crushed by a meteorite"
	};

	int index = std::rand() % length;

	std::cout << RED << this->name << msgs[index] << RED << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrapInstance) {
	*this = fragTrapInstance;
	return *this;
}

// set default parameter for each field exept name
void FragTrap::setDefaultValues(void) {
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
std::string FragTrap::getName(void) {
	return this->name;
}

int FragTrap::getHitPoints(void) {
	return this->hitPoints;
}

int FragTrap::getEnergyPoints(void) {
	return this->energyPoints;
}
// ========================= getters ===========================

// ========================= setters ===========================
void FragTrap::setName(std::string value) {
	this->name = value;
}
// ========================= setters ===========================

void FragTrap::rangedAttack(std::string const &target) {
	std::cout << CYAN << "FR4G-TP " + this->name + " attacks " +
	target + " at range, causing " << this->rangedAttackDamage
	<< " points of damage!" << CYAN << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) {
	std::cout << CYAN << "FR4G-TP " + this->name + " attacks " +
	target + " at melee, causing " << this->meleeAttackDamage
	<< " points of damage!" << CYAN << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount - this->armorDamageReduction;
	if (this->hitPoints < 0) {
		this->hitPoints = 0;
	}
	std:: cout << PINK << this->name + " takes "
	<< amount << " points of damage" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	if (this->hitPoints > this->maxEnergyPoints) {
		amount -= this->hitPoints - this->maxHitPoints;
		this->hitPoints = this->maxEnergyPoints;
	}
	std::cout << GREEN << this->name + " is repaired for "
	<< amount << " hit points" << GREEN << std::endl;
}

void FragTrap::vaultHunterDotExe(std::string const &target) {

	const int attackNum(10);

	std::string typeOfAttacks[attackNum] = {
		"'Nade out!", "Grenade!", "Grenaaaade!",
		"Hot potato!", "Pull pin, throw!", "Take that!",
		"Throwing grenade!", "Bad guy go boom!",
		"Eat bomb, baddie!", "Present for you!"
	};

	int randAttack = std::rand() % attackNum;

	if (this->energyPoints >= 25) {
		std::cout << GREEN << this->name + ": " + typeOfAttacks[randAttack] +
		" for " + target << GREEN << std::endl;
		this->energyPoints -= 25;
		if (this->energyPoints < 0)
			this->energyPoints = 0;
	}
	else
		std::cout << PINK << this->name + " is out of energy" << PINK << std::endl;
}