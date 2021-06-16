#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _count(0) {
	this->_materia = new AMateria*[4];
	for (int i(0); i < 4; ++i) {
		this->_materia[i] = nullptr;
	}
}

MateriaSource::~MateriaSource() {
	for (int i(0); i < 4; ++i) {
		if (this->_materia[i] != nullptr)
			delete this->_materia[i];
	}
	delete[] this->_materia;
} 

MateriaSource::MateriaSource(MateriaSource const &other) : _count(0) {
	*this = other;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other) {
	for (int i(0); i < this->_count; ++i) {
		if (other._materia[i] != nullptr) {
			delete this->_materia[i];
			this->_materia[i] = other._materia[i]->clone();
		}
		else
			delete this->_materia[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia) {
	if (materia == nullptr)
		return ;
	if (this->_count >= 0 && this->_count < 4) {
		this->_materia[this->_count] = materia;
	}
	this->_count++;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i(0); i < this->_count; ++i)
		if (this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
	return nullptr;
}