#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::Enemy(int hp, const std::string & type) :
    _hp(hp), _type(type) {}

Enemy::~Enemy() {}

Enemy::Enemy(const Enemy & other) {
    this->_hp = other._hp;
    this->_type = other._type;
}

Enemy & Enemy::operator=(const Enemy & other) {
    this->_hp = other._hp;
    this->_type = other._type;
    return *this;
}

const std::string & Enemy::getType(void) const {
    return this->_type;
}

int Enemy::getHP(void) const {
    return this->_hp;
}

void Enemy::takeDamage(int amount) {
    std::cout << this->_type + " takes " << amount << " damage" << std::endl;
}
