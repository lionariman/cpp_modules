#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    std::cout << GREEN << "human A - " + this->_name + " was born" << GREEN << std::endl;
}

HumanA::~HumanA()
{
    std::cout << PINK << "human A - " + this->_name + " was died" << PINK << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << BLUE <<this->_name + " attacks with his " + this->_weapon.getType() << BLUE << std::endl;
}
