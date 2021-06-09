#include "Peon.hpp"

 // -------------------------------------------------------

Peon::Peon() {}

Peon::Peon(std::string name) :
	Victim(name),
	_name(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon &other) {
	this->_name = other._name;
}

Peon &Peon::operator=(const Peon &other) {
	this->_name = other._name;
	return *this;
}

 // -------------------------------------------------------

void Peon::getPolymorphed(void) const {
	std::cout << this->_name + " has been turned into a pink pony!" << std::endl;
}

std::ostream & operator << (std::ostream &out, const Peon &peon) {
	out << "I am " + peon.getName() + " and I like otters!" << std::endl;
	return (out);
}
