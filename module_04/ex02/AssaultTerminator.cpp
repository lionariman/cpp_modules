#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &other) {
	(void)other;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &other) {
	(void)other;
	return *this;
}

ISpaceMarine *AssaultTerminator::clone() const {
	ISpaceMarine *newSpaceMarine = new AssaultTerminator;
	return (newSpaceMarine);
}

void AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAtaack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}