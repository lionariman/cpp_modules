#include "Human.hpp"

int	main(void)
{
	Human human;

	std::cout << "Brain address: " + human.getBrain()->identify() << std::endl;
	std::cout << "Human address: " + human.identify() << std::endl;
	return (0);
}