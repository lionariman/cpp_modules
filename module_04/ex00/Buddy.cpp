#include "Buddy.hpp"

 // -------------------------------------------------------

Buddy::Buddy() {}

Buddy::Buddy(std::string name) :
	Victim(name),
	_name(name)
{
	std::cout << "Zog zog." << std::endl;
}

Buddy::~Buddy() {
	std::cout << "Bleuark..." << std::endl;
}

Buddy::Buddy(const Buddy &other) {
	this->_name = other._name;
}

Buddy &Buddy::operator=(const Buddy &other) {
	this->_name = other._name;
	return *this;
}

 // -------------------------------------------------------

void Buddy::getPolymorphed(void) const {
	std::cout << this->_name + " has been turned into a bycicle!" << std::endl;
}

std::ostream & operator << (std::ostream &out, const Buddy &buddy) {
	out << "I am " + buddy.getName() + " and I like otters!" << std::endl;
	return (out);
}
