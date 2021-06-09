#include "PlasmaRifle.hpp"


PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & other) {
	this->_name = other._name;
	this->_apcost = other._apcost;
	this->_damage = other._damage;
}

PlasmaRifle & PlasmaRifle::operator=(const PlasmaRifle & other) {
	this->_name = other._name;
	this->_apcost = other._apcost;
	this->_damage = other._damage;
	return *this;
}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}