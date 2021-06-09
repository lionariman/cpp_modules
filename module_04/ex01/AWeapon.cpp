#include "AWeapon.hpp"

AWeapon::AWeapon() {}

AWeapon::AWeapon(const std::string & name, int apcost, int damage) :
	_name(name),
	_apcost(apcost),
	_damage(damage) {}

AWeapon::~AWeapon() {
	std::cout << this->_name + " is destroyed" << std::endl;
}

AWeapon::AWeapon(const AWeapon & other) {
	this->_name = other._name;
	this->_apcost = other._apcost;
	this->_damage = other._damage;
}

AWeapon & AWeapon::operator=(const AWeapon & other) {
	this->_name = other._name;
	this->_apcost = other._apcost;
	this->_damage = other._damage;
	return *this;
}

const std::string & AWeapon::getName(void) const {
	return this->_name;
}

int AWeapon::getAPCost(void) const {
	return this->_apcost;
}

int AWeapon::getDamage(void) const {
	return this->_damage;
}