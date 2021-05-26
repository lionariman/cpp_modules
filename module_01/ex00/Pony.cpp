#include "Pony.hpp"

Pony::Pony()
{
	std::cout << "Pony is builded" << std::endl;
}

void Pony::setPonyData(int age, std::string name,
				std::string color, std::string favoriteFood)
{
	this->age = age;
	this->name = name;
	this->color = color;
	this->favoriteFood = favoriteFood;
}

int	Pony::getPonyAge(void)
{
	return this->age;
}

std::string	Pony::getPonyName(void)
{
	return this->name;
}

std::string	Pony::getPonyColor(void)
{
	return this->color;
}

std::string	Pony::getPonyFavoriteFood(void)
{
	return this->favoriteFood;
}

Pony::~Pony()
{
	std::cout << getPonyName() + " is destroyed" << std::endl;
}
