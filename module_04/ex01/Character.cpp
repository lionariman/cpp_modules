#include "Character.hpp"

Character::Character() {}

Character::Character(const std::string & name) :
    _name(name),
    _weapon(NULL),
    _numAP(40) {}

Character::~Character() {}

Character::Character(const Character & other) {
    this->_name = other._name;
    this->_numAP = other._numAP;
    this->_weapon = other._weapon;
}

Character & Character::operator=(const Character & other) {
    this->_name = other._name;
    this->_numAP = other._numAP;
    this->_weapon = other._weapon;
    return *this;
}

const std::string & Character::getName(void) const {
    return this->_name;
}

void Character::recoverAP(void) {
    this->_numAP += this->_numAP > 40 ? 40 : 10;
}

void Character::equip(AWeapon *weapon) {
    this->_weapon = weapon;
}

void Character::attack(Enemy *enemy) {
    if ((this->_numAP -= this->_numAP < this->_weapon->getAPCost() ? this->_numAP : this->_weapon->getAPCost()) <= 0)
        std::cout << "action points are out" << std::endl;
    else
    {
        if (this->checkDeath == 1)
        {
            std::cout << "You've killed the enemy" << std::endl;
            return ;
        }
        else
        {
            std::cout << this->_name + " attacks " + enemy->getType() + " with a " + this->_weapon->getName() << std::endl;
            this->_weapon->attack();
            enemy->takeDamage(this->_weapon->getDamage());
        }
    }
    if (this->checkDeath != 1 && enemy->getHP() <= 0)
    {
        delete enemy;
        this->checkDeath = 1;
    }
}

AWeapon * Character::getWeapon(void) const {
    return this->_weapon;
}

int Character::getAP(void) const {
    return this->_numAP;
}

std::ostream & operator << (std::ostream & out, const Character & ch) {
    if (ch.getWeapon())
        out << ch.getName() + " has " << ch.getAP() << " AP and wields a " + ch.getWeapon()->getName() << std::endl;
    else
        out << ch.getName() + " has " << ch.getAP() << " AP and is unarmed"  << std::endl;
    return out;
} 