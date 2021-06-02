#include "Human.hpp"

Human::Human()
{
	std::cout << "Human is builded" << std::endl;
}

Human::~Human()
{
	std::cout << "Human is destroyed" << std::endl;
}

std::string Human::identify(void)
{
	return this->brain.identify();
}

Brain	&Human::getBrain(void)
{
	return this->brain;
}