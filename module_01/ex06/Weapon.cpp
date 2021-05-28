#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	this->_type = weapon;
	std::cout << CYAN <<this->_type + " is builded" << CYAN << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << RED << this->_type + " is broken" << RED << std::endl;
}

std::string Weapon::getType(void)
{
	return this->_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
