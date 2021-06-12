#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"


void main1(void) {
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;
	ISpaceMarine *bill = new TacticalMarine;
	ISpaceMarine *jo = new AssaultTerminator;

	ISquad *vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	vlc->push(bill);
	vlc->push(jo);

	std::cout << vlc->getCount() << std::endl;

	for (int i(0); i < vlc->getCount(); ++i)
	{
		ISpaceMarine *cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAtaack();
	}
	delete vlc;
}

int main(void) {
	main1();
	// while(1);
	return (0);
}