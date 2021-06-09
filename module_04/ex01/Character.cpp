#include "Character.hpp"

Character::Character() {}

Character::Character(const std::string & name) :
    _name(name),
    _weapon(NULL),
    _numAP(40) {}

Character::~Character() {
    std::cout << this->_name + " will be back" << std::endl;
}

Character::Character(const Character & other) {
    this->_name = other._name;
}

Character & Character::operator=(const Character & other) {
    this->_name = other._name;
    return *this;
}

const std::string & Character::getName(void) const {
    return this->_name;
}

void Character::recoverAP(void) {
    this->_numAP += 10;
    this->_numAP  = this->_numAP > 40 ? 40 : this->_numAP; 
}

void Character::equip(AWeapon * weapon) {
    this->_weapon = weapon;
    std::cout << this->_name + " has " << this->_numAP << " AP and wields a " + weapon->getName() << std::endl;
}

void Character::attack(Enemy * enemy) {
    std::cout << this->_name + " attacks " + enemy->getType() + " with a " + this->_weapon->getName() << std::endl;
}

AWeapon * Character::getWeapon(void) const {
    return this->_weapon;
}

int Character::getAP(void) const {
    return this->_numAP;
}

std::ostream & operator << (std::ostream & out, const Character & ch) {
    if (ch.getWeapon())
        ;
    else
        out << ch.getName() + " has " << ch.getAP() << " AP and is unarmed"  << std::endl;
    return out;
} 