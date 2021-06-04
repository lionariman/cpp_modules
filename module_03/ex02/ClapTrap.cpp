#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name) {
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

ClapTrap::ClapTrap(const ClapTrap &fragTrapInstance) {
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

ClapTrap::~ClapTrap() {
	const int length(3);
	std::string msgs[length] = {
		" was stricken with rust",
		" had a system failure",
		" was crushed by a meteorite"
	};

	int index = std::rand() % length;

	std::cout << RED << this->name << msgs[index] << RED << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &fragTrapInstance) {
	*this = fragTrapInstance;
	return *this;
}

// set default parameter for each field exept name
void ClapTrap::setDefaultValues(void) {
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
std::string ClapTrap::getName(void) {
	return this->name;
}

int ClapTrap::getHitPoints(void) {
	return this->hitPoints;
}

int ClapTrap::getEnergyPoints(void) {
	return this->energyPoints;
}
// ========================= getters ===========================

// ========================= setters ===========================
void ClapTrap::setName(std::string value) {
	this->name = value;
}
// ========================= setters ===========================

void ClapTrap::rangedAttack(std::string const &target) {
	std::cout << CYAN << "CL4P-TP " + this->name + " attacks " +
	target + " at range, causing " << this->rangedAttackDamage
	<< " points of damage!" << CYAN << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target) {
	std::cout << CYAN << "CL4P-TP " + this->name + " attacks " +
	target + " at melee, causing " << this->meleeAttackDamage
	<< " points of damage!" << CYAN << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount - this->armorDamageReduction;
	if (this->hitPoints < 0) {
		this->hitPoints = 0;
	}
	std:: cout << PINK << this->name + " takes "
	<< amount << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	if (this->hitPoints > this->maxEnergyPoints) {
		amount -= this->hitPoints - this->maxHitPoints;
		this->hitPoints = this->maxEnergyPoints;
	}
	std::cout << GREEN << this->name + " is repaired for "
	<< amount << " hit points" << GREEN << std::endl;
}