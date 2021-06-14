#ifndef CPP_AMATERIA_HPP
# define CPP_AMATERIA_HPP

# include <iostream>

class AMateria;

# include "ICharacter.hpp"

class AMateria
{
private:
	AMateria();

protected:
	std::string _type;
	unsigned int _xp;

public:
	virtual ~AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria const &other);
	AMateria &operator=(AMateria const &other);

	std::string const &getType() const; // returns the materian type
	unsigned int getXP() const; // returns the materia's XP

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif