#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(Cure const &other) : AMateria("cure") {
	*this = other;
}

Cure &Cure::operator=(Cure const &other) {
	this->_xp = other._xp;
	return *this;
}

AMateria *Cure::clone() const {
	AMateria *materia = new Cure;
	return materia;
}

void Cure::use(ICharacter &target) {
	// AMateria::use(target);
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
	this->_xp += 10;
}