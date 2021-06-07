#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
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

FragTrap::FragTrap(const FragTrap &other) {
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->level = other.level;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
	const int length(3);
	std::string msgs[length] = {
		" was created from scrap metal",
		" was assembled at the factory",
		" was created by the leader of the machines"
	};

	int index = std::rand() % length;

	std::cout << BLUE << this->name << msgs[index] << BLUE << std::endl;
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

FragTrap &FragTrap::operator=(const FragTrap &other) {
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->level = other.level;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
	return *this;
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
	else if (this->energyPoints > 0 && this->energyPoints < 25) {
		std::cout << GREEN << this->name + ": " + typeOfAttacks[randAttack] +
		" for " + target << GREEN << std::endl;
		this->energyPoints -= 25;
		if (this->energyPoints < 0)
			this->energyPoints = 0;
	}
	else
		std::cout << PINK << this->name + " is out of energy 1" << PINK << std::endl;
}