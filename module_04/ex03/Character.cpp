#include "Character.hpp"

Character::Character() {}

Character::~Character() {
	for (int i(0); i < 4; ++i) {
		if (this->_inventory[i] != nullptr)
			delete this->_inventory[i];
	}
	delete[] this->_inventory;
}

Character::Character(std::string const &name) : _index(0), _name(name) {
	this->_inventory = new AMateria*[4];
	for (int i(0); i < 4; ++i) {
		this->_inventory[i] = nullptr;
	}
}

Character::Character(Character const &other) {
	*this = other;
}

Character &Character::operator=(Character const &other) {
	this->_name = other._name;
	this->_index = other._index;
	if (this != &other) {
		for (int i(0); i < (int)this->_index; ++i) {
			delete this->_inventory[i];
			this->_inventory[i] = other._inventory[i]->clone();
		}
	}
	return *this;
}

std::string const &Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *m) {
	if (this->_index >= 0 && this->_index < 4) {
		this->_inventory[this->_index] = m;
	}
	this->_index++;
}

void Character::unequip(int idx) {
	if (idx < (int)this->_index) {
		for (int i(idx); i < 3; ++i) {
			this->_inventory[i] = this->_inventory[i + 1];
			this->_inventory[i + 1] = nullptr;
		}
	}
	this->_index--;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < (int)this->_index) {
		this->_inventory[idx]->use(target);
	}
}