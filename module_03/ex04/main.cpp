#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void) {
	srand(time(NULL));

	FragTrap fragTrap("Medbot");
	ScavTrap scavTrap("Redbelly");
	ClapTrap clapTrap("Hyperion");
	NinjaTrap ninjaTrap("Naruto");
	SuperTrap superTrap("Xtrap");

	superTrap.printValues();

	std::cout << GREEN << "<===========> START BATTLE <===========>" << GREEN << std::endl;
	while (true) {
		int rand = std::rand() % 5;
		if (rand == 4)
		{
			superTrap.ninjaShoebox(ninjaTrap);
			superTrap.meleeAttack(ninjaTrap.getName());
			superTrap.takeDamage(30);
			superTrap.takeDamage(10);
		}
		else if (rand == 0)
		{
			superTrap.vaultHunterDotExe(fragTrap.getName());
			superTrap.rangedAttack(fragTrap.getName());
			superTrap.beRepaired(20);
			superTrap.takeDamage(10);
		}
		else if (rand == 2)
		{
			superTrap.vaultHunterDotExe(scavTrap.getName());
			superTrap.vaultHunterDotExe(clapTrap.getName());
			superTrap.takeDamage(35);
			superTrap.beRepaired(10);
		}
		if (!fragTrap.getHitPoints() ||
			!fragTrap.getEnergyPoints())
		{
			std::cout << RED << fragTrap.getName() + " is fell" << RED << std::endl;
			break ;
		}
		else if (!scavTrap.getHitPoints() ||
				 !scavTrap.getEnergyPoints())
		{
			std::cout << RED << scavTrap.getName() + " is fell" << RED << std::endl;
			break ;
		}
		else if (!clapTrap.getHitPoints() ||
				 !clapTrap.getEnergyPoints())
		{
			std::cout << RED << clapTrap.getName() + " is fell" << RED << std::endl;
			break ;
		}
		else if (!ninjaTrap.getHitPoints() ||
				 !ninjaTrap.getEnergyPoints())
		{
			std::cout << RED << ninjaTrap.getName() + " is fell" << RED << std::endl;
			break ;
		}
		else if (!superTrap.getHitPoints() ||
				 !superTrap.getEnergyPoints())
		{
			std::cout << RED << superTrap.getName() + " is fell" << RED << std::endl;
			break ;
		}
	}
	std::cout << GREEN << "<======================================>" << GREEN << std::endl;
	return (0);
}