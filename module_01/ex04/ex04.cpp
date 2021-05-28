#include <iostream>

void	displayUsingPointer(std::string *someString)
{
	std::cout << "Pointer: " + *someString << std::endl;
}

void	displayUsingReference(std::string &someString)
{
	std::cout << "Reference: " + someString << std::endl;
}

int	main(void)
{
	std::string someString = "HI THIS IS BRAIN";
	std::string *pointerToString = &someString;
	std::string &referenceToString = someString;

	displayUsingPointer(pointerToString);
	displayUsingReference(referenceToString);

	return (0);
}