#include "RadScorpion.hpp"

RadScorpion::RadScorpion() :
    Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion & other) {
    this->_hp = other._hp;
    this->_type = other._type;
}

RadScorpion & RadScorpion::operator=(const RadScorpion & other) {
    this->_hp = other._hp;
    this->_type = other._type;
    return *this;
}

void RadScorpion::takeDamage(int amount) {
    std::cout << this->_type + " takes " << amount << " damage" << std::endl;
}
