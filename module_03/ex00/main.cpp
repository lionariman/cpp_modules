#include "FragTrap.hpp"

int checkDeath(FragTrap *a, FragTrap *b, FragTrap *c) {
	if (!a->getHitPoints())
	{
		std::cout << RED << a->getName() + " fell" << RED << std::endl;
		return (1);
	}
	else if (!b->getHitPoints())
	{
		std::cout << RED << b->getName() + " fell" << RED << std::endl;
		return (1);
	}
	else if (!c->getHitPoints())
	{
		std::cout << RED << c->getName() + " fell" << RED << std::endl;
		return (1);
	}
	else if (!a->getEnergyPoints() && !b->getEnergyPoints() && c->getEnergyPoints())
	{
		std::cout << RED << "Robots have depleted all their energy reserves" << RED << std::endl;
		return (1);
	}
	return (0);
}

void heroAttacksEnemy(FragTrap *hero, FragTrap *enemy) {
	int index(0);

	index = std::rand() % 2;
	if (index == 1)
	{
		hero->vaultHunterDotExe(enemy->getName());
		if (hero->getEnergyPoints())
		{
			hero->meleeAttack(enemy->getName());
			enemy->takeDamage(30);
		}
	}
	else if (index == 2)
	{
		hero->vaultHunterDotExe(enemy->getName());
		if (hero->getEnergyPoints())
		{
			hero->rangedAttack(enemy->getName());
			enemy->takeDamage(20);
		}
		enemy->beRepaired(5);
	}
}

void startBattle(FragTrap *a, FragTrap *b, FragTrap *c) {
	int randNum(0);

	randNum = std::rand() % 6;
	if (randNum == 1)
		heroAttacksEnemy(a, b);
	else if (randNum == 2)
		heroAttacksEnemy(a, c);
	else if (randNum == 3)
		heroAttacksEnemy(b, a);
	else if (randNum == 4)
		heroAttacksEnemy(b, c);
	else if (randNum == 5)
		heroAttacksEnemy(c, a);
	else if (randNum == 6)
		heroAttacksEnemy(c, b);
}

int main(void) {
	srand(time(NULL));

	FragTrap *clapTrap1 = new FragTrap("Medbot");
	FragTrap *clapTrap2 = new FragTrap("Mechromagician");
	FragTrap *clapTrap3 = new FragTrap("Rubber Dicky");

	std::cout << GREEN << "<===========> START BATTLE <===========>" << GREEN << std::endl;
	while (true) {
		startBattle(clapTrap1, clapTrap2, clapTrap3);
		if (checkDeath(clapTrap1, clapTrap2, clapTrap3))
			break ;
	}
	std::cout << GREEN << "<======================================>" << GREEN << std::endl;

	delete clapTrap1;
	delete clapTrap2;
	delete clapTrap3;

	return (0);
}
