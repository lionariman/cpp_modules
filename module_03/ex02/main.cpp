#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	srand(time(NULL));

	FragTrap fragTrap1("Medbot");
	FragTrap fragTrap2("Mechromagician");
	ScavTrap scavTrap1("Redbelly");
	ClapTrap clapTrap1("Hyperion");

	std::cout << GREEN << "<===========> START BATTLE <===========>" << GREEN << std::endl;
	while (true) {
		int rand = std::rand() % 4;
		if (rand == 4)
		{
			fragTrap1.vaultHunterDotExe(fragTrap2.getName());
			fragTrap1.rangedAttack(fragTrap2.getName());
			fragTrap1.takeDamage(30);
			fragTrap1.beRepaired(15);
		}
		else if (rand == 0)
		{
			fragTrap2.vaultHunterDotExe(fragTrap1.getName());
			fragTrap2.meleeAttack(fragTrap1.getName());
			fragTrap2.takeDamage(20);
		}
		else if (rand == 2)
		{
			scavTrap1.challengeNewscomer();
			scavTrap1.rangedAttack(fragTrap1.getName());
			scavTrap1.takeDamage(30);
			scavTrap1.beRepaired(10);
		}
		else if (rand == 1)
		{
			clapTrap1.meleeAttack(scavTrap1.getName());
			clapTrap1.takeDamage(20);
			clapTrap1.beRepaired(5);
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
		else if (!clapTrap1.getHitPoints() ||
				 !clapTrap1.getEnergyPoints())
		{
			std::cout << RED << clapTrap1.getName() + " is fell" << RED << std::endl;
			break ;
		}
	}
	std::cout << GREEN << "<======================================>" << GREEN << std::endl;

	return (0);
}