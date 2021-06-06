#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap() {}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
	this->name = name;
	std::cout << BLUE << this->name + " was born in konoha" << BLUE << std::endl;
	this->setDefaultValues();
}

NinjaTrap::NinjaTrap(const NinjaTrap &fragTrapInstance) {
	*this = fragTrapInstance;
	std::cout << BLUE << this->name + " was born in konoha" << BLUE << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << RED << this->name + " was defeated by a deadly ninjutsu"  << RED << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &fragTrapInstance) {
	*this = fragTrapInstance;
	return *this;
}

// set default parameter for each field exept name
void NinjaTrap::setDefaultValues(void) {
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
}

void NinjaTrap::ninjaShoebox(ClapTrap &clptp) {
	const int attackNum(10);

	std::string typeOfAttacks[attackNum] = {
		"Eat it, fleshbag!",
		"HaHA!!!",
		"Pincer Attack!",
		"Punch punch! Fight!",
		"Target disassembled.",
		"Viva La Robolution!",
		"Shoryuken!"
	};

	int randAttack = std::rand() % attackNum;

	if (this->energyPoints >= 50) {
		std::cout << GREEN << this->name + ": " + typeOfAttacks[randAttack] +
		" for " + clptp.getName() << GREEN << std::endl;
		this->energyPoints -= 50;
		if (this->energyPoints < 0)
			this->energyPoints = 0;
	}
	else
		std::cout << PINK << this->name + " is out of energy" << PINK << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &frgtp) {
	const int attackNum(10);

	std::string typeOfAttacks[attackNum] = {
		"Eat it, fleshbag!",
		"HaHA!!!",
		"Pincer Attack!",
		"Punch punch! Fight!",
		"Target disassembled.",
		"Viva La Robolution!",
		"Shoryuken!"
	};

	int randAttack = std::rand() % attackNum;

	if (this->energyPoints >= 30) {
		std::cout << GREEN << this->name + ": " + typeOfAttacks[randAttack] +
		" for " + frgtp.getName() << GREEN << std::endl;
		this->energyPoints -= 30;
		if (this->energyPoints < 0)
			this->energyPoints = 0;
	}
	else
		std::cout << PINK << this->name + " is out of energy" << PINK << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &scvtp) {
	const int attackNum(10);

	std::string typeOfAttacks[attackNum] = {
		"Eat it, fleshbag!",
		"HaHA!!!",
		"Pincer Attack!",
		"Punch punch! Fight!",
		"Target disassembled.",
		"Viva La Robolution!",
		"Shoryuken!"
	};

	int randAttack = std::rand() % attackNum;

	if (this->energyPoints >= 20) {
		std::cout << GREEN << this->name + ": " + typeOfAttacks[randAttack] +
		" for " + scvtp.getName() << GREEN << std::endl;
		this->energyPoints -= 20;
		if (this->energyPoints < 0)
			this->energyPoints = 0;
	}
	else
		std::cout << PINK << this->name + " is out of energy" << PINK << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &njtp) {
	const int attackNum(10);

	std::string typeOfAttacks[attackNum] = {
		"Eat it, fleshbag!",
		"HaHA!!!",
		"Pincer Attack!",
		"Punch punch! Fight!",
		"Target disassembled.",
		"Viva La Robolution!",
		"Shoryuken!"
	};

	int randAttack = std::rand() % attackNum;

	if (this->energyPoints >= 20) {
		std::cout << GREEN << this->name + ": " + typeOfAttacks[randAttack] +
		" for " + njtp.getName() << GREEN << std::endl;
		this->energyPoints -= 20;
		if (this->energyPoints < 0)
			this->energyPoints = 0;
	}
	else if (this->energyPoints <= 20 && this->energyPoints > 0) {
		std::cout << GREEN << this->name + ": " + typeOfAttacks[randAttack] +
		" for " + njtp.getName() << GREEN << std::endl;
		this->energyPoints -= 20;
		if (this->energyPoints < 0)
			this->energyPoints = 0;
	}
	else
		std::cout << PINK << this->name + " is out of energy 2" << PINK << std::endl;
}