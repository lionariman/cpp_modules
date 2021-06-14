#include "Flame.hpp"

Flame::Flame() : AMateria("flame") {}

Flame::~Flame() {}

Flame::Flame(Flame const &other) : AMateria("flame") {
	*this = other;
}

Flame &Flame::operator=(Flame const &other) {
	this->_xp = other._xp;
	return *this;
}

AMateria *Flame::clone() const {
	AMateria *materia = new Flame;
	return materia;
}

void Flame::use(ICharacter &target) {
	// AMateria::use(target);
	std::cout << "* lick " + target.getName() + " with flame *" << std::endl;
	this->_xp += 10;
}