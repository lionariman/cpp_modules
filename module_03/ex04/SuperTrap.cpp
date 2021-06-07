#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
    this->name = name;
    this->setDefaultValues();
    std::cout << BROWN <<this->name + " have been rise" << BROWN << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &other) {
    this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->level = other.level;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
    std::cout << BROWN << "Copy constructor called" << BROWN << std::endl;
}

SuperTrap::~SuperTrap() {
    std::cout << BROWN << this->name + " was fallen" << BROWN << std::endl;
}

SuperTrap & SuperTrap::operator=(const SuperTrap &other) {
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

void SuperTrap::setDefaultValues(void) {
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 120;
    this->maxEnergyPoints = 120;
    this->level = 1;
    this->meleeAttackDamage = 60;
    this->rangedAttackDamage = 20;
    this->armorDamageReduction = 5;
}

void SuperTrap::printValues(void) {
    std::cout << BROWN <<
    "\n**** SUPER TRAP INFO ****\n\n" <<
    "name: " + this->name + "\n" <<
    "hit points: " << this->hitPoints << "\n" <<
    "max hit points: " << this->maxHitPoints << "\n" <<
    "energy points: " << this->energyPoints << "\n" <<
    "max energy points: " << this->maxEnergyPoints << "\n" <<
    "level: " << this->level << "\n" <<
    "ranged attack damage: " << this->rangedAttackDamage << "\n" <<
    "melee attack damage: " << this->meleeAttackDamage << "\n" <<
    "armor damage reduction: " << this->armorDamageReduction << "\n"
    << BROWN << std::endl;
}