#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	srand(time(NULL));

	FragTrap fragTrap1("Medbot");
	FragTrap fragTrap2("Mechromagician");
	ScavTrap scavTrap1("Redbelly");

	std::cout << GREEN << "<===========> START BATTLE <===========>" << GREEN << std::endl;
	while (true) {
		int rand = std::rand() % 3;
		if (rand == 0)
		{
			fragTrap1.vaultHunterDotExe(fragTrap2.getName());
			fragTrap1.rangedAttack(fragTrap2.getName());
			fragTrap1.takeDamage(30);
			fragTrap1.beRepaired(15);
		}
		else if (rand == 1)
		{
			fragTrap2.vaultHunterDotExe(fragTrap1.getName());
			fragTrap2.meleeAttack(fragTrap1.getName());
			fragTrap2.takeDamage(20);
		}
		else if (rand == 2)
		{
			scavTrap1.challengeNewscomer();
			scavTrap1.rangedAttack(fragTrap1.getName());
			scavTrap1.takeDamage(40);
			scavTrap1.beRepaired(10);
		}
		if (!fragTrap1.getHitPoints() ||
			!fragTrap1.getEnergyPoints())
		{
			std::cout << RED << fragTrap1.getName() + " is fell" << RED << std::endl;
			break ;
		}
		else if (!fragTrap2.getHitPoints() ||
				 !fragTrap2.getEnergyPoints())
		{
			std::cout << RED << fragTrap2.getName() + " is fell" << RED << std::endl;
			break ;
		}
		else if (!scavTrap1.getHitPoints() ||
				 !scavTrap1.getEnergyPoints())
		{
			std::cout << RED << scavTrap1.getName() + " is fell" << RED << std::endl;
			break ;
		}
	}
	std::cout << GREEN << "<======================================>" << GREEN << std::endl;

	return (0);
}