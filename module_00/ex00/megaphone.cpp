#include <iostream>

int	main(int ac, const char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	for (int i(1); i < ac; i++)
	{
		for (int j(0); j < (int)strlen(av[i]); j++)
			std::cout << (char)std::toupper(av[i][j]);
		if (i < ac - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
