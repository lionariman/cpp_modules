#ifndef CPP_SQUAD_HPP
# define CPP_SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include "AssaultTerminator.hpp"

class Squad : public ISquad
{
	private:
		int _numOfUnits;
		ISpaceMarine **_units;

	public:
		Squad();
		~Squad();
		Squad(const Squad & other);
		Squad & operator = (const Squad & other);

		int getCount() const;
		ISpaceMarine *getUnit(int unit) const;
		int push(ISpaceMarine *spaceMarine);
};

#endif