#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is builded" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain is destroyed" << std::endl;
}

std::string	Brain::identify(void)
{
	std::string address, mem;
	long hex = (long)this;

	while (hex)
	{
		if (hex % 16 < 10)
			mem += hex % 16 + '0';
		else
			mem += hex % 16 - 10 + 'A';
		hex /= 16;
	}
	for (int i(mem.length()); i > 0; i--)
		address += mem[i];
	return "0x" + address;
}

std::string	Brain::identify(void)
{
	std::stringstream address;

	address << this;
	std::string str = address.str();
	return (str);
}
