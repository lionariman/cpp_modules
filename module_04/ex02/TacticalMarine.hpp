#ifndef CPP_TACTICAL_MARINE_HPP
# define CPP_TACTICAL_MARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		~TacticalMarine();
		TacticalMarine(const TacticalMarine & other);
		TacticalMarine & operator = (const TacticalMarine & other);

		ISpaceMarine *clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAtaack() const;
};

#endif