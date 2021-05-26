#include "Pony.hpp"

int		printErrorMsg(std::string errorMsg)
{
	std::cout << "Error: " + errorMsg << std::endl;
	exit(1);
}

void	ponyOnTheHeep(void)
{
	Pony *pony = new(std::nothrow) Pony();
	if (pony == NULL)
		printErrorMsg("cannot allocate memory: (Pony)");
	pony->setPonyData(100, "Markiza De Pompadour", "Pink", "Tarte Tatin");
	std::cout << PINK << "\nHello World!\nI'm a wisest Pony\n"
				 "My name is " + pony->getPonyName() +
				 "\nand I'm " << pony->getPonyAge() << " years old\n"
				 "I think I'm special because I'm "
				 + pony->getPonyColor() + "\n"
				 "Also you should to know that I really love to eat "
				 + pony->getPonyFavoriteFood() << PINK << std::endl;
	delete(pony);
}

void	ponyOnTheStack(void)
{
	Pony pony = Pony();
	pony.setPonyData(57, "Brad Pitt", "Blue", "Twizzlers");
	std::cout << BLUE << "\nHello World!\nI'm a brutal Pony\n"
				 "My name is " + pony.getPonyName() +
				 "\nand I'm " << pony.getPonyAge() << " years old\n"
				 "I think I'm special because I'm "
				 + pony.getPonyColor() + "\n"
				 "Also you should to know that I really love to eat "
				 + pony.getPonyFavoriteFood() << BLUE << std::endl;
}

int main(void)
{
    ponyOnTheHeep();
    ponyOnTheStack();
	return (0);
}