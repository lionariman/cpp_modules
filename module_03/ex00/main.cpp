#include "FragTrap.hpp"

int main(void) {
	srand(time(NULL));

	FragTrap *fragTrap1 = new FragTrap("Medbot");
	FragTrap *fragTrap2 = new FragTrap("Mechromagician");

	std::cout << GREEN << "<===========> START BATTLE <===========>" << GREEN << std::endl;
	while (true) {
		int rand = std::rand() % 2;
		if (rand == 0)
		{
			fragTrap1->vaultHunterDotExe(fragTrap2->getName());
			fragTrap1->rangedAttack(fragTrap2->getName());
			fragTrap1->takeDamage(30);
			fragTrap1->beRepaired(5);
		}
		else if (rand == 1)
		{
			fragTrap2->vaultHunterDotExe(fragTrap1->getName());
			fragTrap2->meleeAttack(fragTrap1->getName());
			fragTrap2->takeDamage(20);
		}
		if (!fragTrap1->getHitPoints() || !fragTrap1->getEnergyPoints())
		{
			std::cout << RED << fragTrap1->getName() + " is fell" << RED << std::endl;
			break ;
		}
		else if (!fragTrap2->getHitPoints() || !fragTrap2->getEnergyPoints())
		{
			std::cout << RED << fragTrap2->getName() + " is fell" << RED << std::endl;
			break ;
		}
	}
	std::cout << GREEN << "<======================================>" << GREEN << std::endl;

	delete fragTrap1;
	delete fragTrap2;

	return (0);
}
