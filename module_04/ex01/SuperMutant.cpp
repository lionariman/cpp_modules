#include "SuperMutant.hpp"

SuperMutant::SuperMutant() :
    Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant & other) {
    this->_hp = other._hp;
    this->_type = other._type;
}

SuperMutant & SuperMutant::operator=(const SuperMutant & other) {
    this->_hp = other._hp;
    this->_type = other._type;
    return *this;
}

void SuperMutant::takeDamage(int amount) {
    std::cout << this->_type + " takes " << amount << " damage" << std::endl;
}
