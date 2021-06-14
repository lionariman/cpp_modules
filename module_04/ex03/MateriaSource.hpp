#ifndef CPP_MATERIA_SOURCE_HPP
# define CPP_MATERIA_SOURCE_HPP

# include "IMateriaSource.hpp"
# include "Cure.hpp"
# include "Ice.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria **_materia;
	int _count;

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const &other);
	MateriaSource &operator=(MateriaSource const &other);

	void learnMateria(AMateria *materia);
	AMateria *createMateria(std::string const &type);
};

#endif