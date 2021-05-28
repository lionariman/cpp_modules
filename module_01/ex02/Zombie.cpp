#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
	std::cout << GREEN << "\n" + this->name +
	" is builded" << GREEN << std::endl;
}

Zombie::~Zombie()
{
	std::cout << PINK << this->name +
	" is destroyed\n" << PINK << std::endl;
}

void Zombie::announce(void)
{
	std::cout << BLUE <<this->name +
	" (" + this->type + ") Braiiiiiiinnnssss..." << BLUE << std::endl;
}
