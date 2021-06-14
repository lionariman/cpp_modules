#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(Ice const &other) : AMateria("ice") {
	*this = other;
}

Ice &Ice::operator=(Ice const &other) {
	this->_xp = other._xp;
	return *this;
}

AMateria *Ice::clone() const {
	AMateria *materia = new Ice;
	return materia;
}

void Ice::use(ICharacter &target) {
	// AMateria::use(target);
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
	this->_xp += 10;
}