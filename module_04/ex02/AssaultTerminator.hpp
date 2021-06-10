#ifndef CPP_ASSAULT_TERMINATOR_HPP
# define CPP_ASSAULT_TERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		~AssaultTerminator();
		AssaultTerminator(const AssaultTerminator & other);
		AssaultTerminator & operator = (const AssaultTerminator & other);

		ISpaceMarine *clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAtaack() const;
};

#endif