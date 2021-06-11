#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &other) {
	(void)other;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &other) {
	(void)other;
	return *this;
}

ISpaceMarine *TacticalMarine::clone() const {
	ISpaceMarine *newSpaceMarine = new TacticalMarine;
	return (newSpaceMarine);
}

void TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAtaack() const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}