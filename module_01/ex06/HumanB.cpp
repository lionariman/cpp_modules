#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	std::cout << GREEN << "Human B - " + this->_name + " was born" << GREEN << std::endl;
}

HumanB::~HumanB()
{
	std::cout << PINK << "Human B - " + this->_name + " was died" << PINK << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << BLUE << this->_name + " attacks with his " + this->_weapon->getType() << BLUE << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
