#ifndef CPP_FLAME_HPP
# define CPP_FLAME_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Flame : public AMateria
{
public:
	Flame();
	~Flame();
	Flame(Flame const &other);
	Flame &operator=(Flame const &other);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif