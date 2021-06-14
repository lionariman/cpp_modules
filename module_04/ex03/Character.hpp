#ifndef CPP_CHARACTER_HPP
# define CPP_CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	Character();
	size_t _index;
	AMateria **_inventory;
	std::string _name;

public:
	~Character();
	Character(std::string const &name);
	Character(Character const &other);
	Character &operator=(Character const &other);

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif