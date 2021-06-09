#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::~PowerFist() {}

PowerFist::PowerFist(const PowerFist & other) {
    this->_name = other._name;
    this->_apcost = other._apcost;
    this->_damage = other._damage;
}

PowerFist & PowerFist::operator=(const PowerFist & other) {
    this->_name = other._name;
    this->_apcost = other._apcost;
    this->_damage = other._damage;
    return *this;
}

void PowerFist::attack(void) const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
