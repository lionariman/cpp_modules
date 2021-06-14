#ifndef CPP_ICE_HPP
# define CPP_ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(Ice const &other);
	Ice &operator=(Ice const &other);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif