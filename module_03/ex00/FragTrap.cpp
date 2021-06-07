#include "FragTrap.hpp"

FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string name) {
	this->name = name;
	this->setDefaultValues();
	std::cout << BLUE << this->name << " assembled on the factory" << BLUE << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrapInstance) {
	this->name = fragTrapInstance.name;
	this->hitPoints = fragTrapInstance.hitPoints;
	this->maxHitPoints = fragTrapInstance.maxHitPoints;
	this->energyPoints = fragTrapInstance.energyPoints;
	this->maxEnergyPoints = fragTrapInstance.maxEnergyPoints;
	this->level = fragTrapInstance.level;
	this->meleeAttackDamage = fragTrapInstance.meleeAttackDamage;
	this->rangedAttackDamage = fragTrapInstance.rangedAttackDamage;
	this->armorDamageReduction = fragTrapInstance.armorDamageReduction;
	std::cout << BLUE << this->name << " assembled on the factory" << BLUE << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << RED << this->name + "was stricken with rust" << RED << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrapInstance) {
	this->name = fragTrapInstance.name;
	this->hitPoints = fragTrapInstance.hitPoints;
	this->maxHitPoints = fragTrapInstance.maxHitPoints;
	this->energyPoints = fragTrapInstance.energyPoints;
	this->maxEnergyPoints = fragTrapInstance.maxEnergyPoints;
	this->level = fragTrapInstance.level;
	this->meleeAttackDamage = fragTrapInstance.meleeAttackDamage;
	this->rangedAttackDamage = fragTrapInstance.rangedAttackDamage;
	this->armorDamageReduction = fragTrapInstance.armorDamageReduction;
	return *this;
}

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

std::string FragTrap::getName(void) {
	return this->name;
}

int FragTrap::getHitPoints(void) {
	return this->hitPoints;
}

int FragTrap::getEnergyPoints(void) {
	return this->energyPoints;
}

void FragTrap::setName(std::string value) {
	this->name = value;
}

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
	std::cout << CYAN << this->name + " is repaired for "
	<< amount << " hit points" << CYAN << std::endl;
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