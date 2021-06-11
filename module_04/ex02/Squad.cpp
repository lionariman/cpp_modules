#include "Squad.hpp"

Squad::Squad() : _numOfUnits(0), _units(nullptr) {}

Squad::~Squad() {
	for (int i(0); i < this->_numOfUnits; i++)
		delete this->_units[i];
	delete[] this->_units;
}

Squad::Squad(const Squad & other) : _numOfUnits(0), _units(nullptr) {
	(void)other;
}

Squad & Squad::operator=(const Squad & other) {
	if (&other == nullptr)
		return *this;
	this->_numOfUnits = other._numOfUnits;
	if (this != &other)
	{
		delete[] this->_units;
		this->_units = new ISpaceMarine*[this->_numOfUnits];
		for (int i(0); i < this->_numOfUnits; i++) {
			this->_units[i] = other._units[i]->clone();
		}
	}
	return *this;
}

ISpaceMarine * Squad::getUnit(int unit) const {
	if (unit >= 0 && unit < this->_numOfUnits)
		return this->_units[unit];
	return nullptr;
}

int Squad::getCount() const {
	return this->_numOfUnits;
}

int Squad::push(ISpaceMarine * spaceMarine) {
	if (spaceMarine == nullptr)
		return this->_numOfUnits;
	for (int i(0); i < this->_numOfUnits; i++)
		if (this->_units[i] == spaceMarine)
			return this->_numOfUnits;
	ISpaceMarine **moreUnits = new ISpaceMarine*[this->_numOfUnits + 1];
	for (int i(0); i < this->_numOfUnits; i++) {
		moreUnits[i] = this->_units[i];
	}
	moreUnits[this->_numOfUnits] = spaceMarine;
	delete[] this->_units;
	this->_units = moreUnits;
	this->_numOfUnits++;
	return this->_numOfUnits;
}