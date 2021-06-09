#include "Victim.hpp"

// ----------------------------------------------------------------------------------

Victim::Victim() {}

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called " + this->_name + " just appeared!" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " + this->_name + " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &other) {
	this->_name = other._name;
}

Victim & Victim::operator = (const Victim &other) {
	this->_name = other._name;
	return *this;
}

// ----------------------------------------------------------------------------------

std::ostream & operator << (std::ostream &out, const Victim &victim) {
	out << "I am " + victim.getName() + " and I like otters!" << std::endl;
	return (out);
}

std::string Victim::getName(void) const {
	return this->_name;
}

void Victim::getPolymorphed(void) const {
	std::cout << this->_name + " has been turned into cute little sheep!" << std::endl;
}