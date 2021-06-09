#include "Sorcerer.hpp"

// ----------------------------------------------------------------------------------

Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer(std::string name, std::string title) :
	_name(name),
	_title(title)
{
	std::cout << this->_name + ", " + this->_title + ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << this->_name + ", " + this->_title +
	", is dead. Consequences will never be the same!"
	<< std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &other) {
	this->_name = other._name;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &other) {
	this->_name = other._name;
	return *this;
}

// ----------------------------------------------------------------------------------

std::ostream &operator << (std::ostream &out, const Sorcerer &sorcerer) {
	out << "I am " + sorcerer.getName() + ", " + sorcerer.getTitle() +
	", and I like ponies!" << std::endl;
	return (out);
}

std::string Sorcerer::getName(void) const {
	return this->_name;
}

std::string Sorcerer::getTitle(void) const {
	return this->_title;
}

void Sorcerer::polymorph(const Victim &other) const {
	other.getPolymorphed();
}