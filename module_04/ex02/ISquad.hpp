#ifndef CPP_ISQUAD_HPP
# define CPP_ISQUAD_HPP

# include "ISpaceMarine.hpp"

/*


• getCount() returns the number of units currently in the squad.

• getUnit(N) returns a pointer to the Nth unit
  (Of course, we start at 0. Null pointer in case of out-of-bounds index.)

• push(XXX) adds the XXX unit to the end of the squad.
  Returns the number of units in the squad after the operation
  (Adding a null unit, or an unit already in the squad, make no sense at all, of course...)


*/

class ISquad
{
	public:
		virtual ~ISquad() {};
		virtual int getCount() const = 0;
		virtual ISpaceMarine *getUnit(int unit) const = 0;
		virtual int push(ISpaceMarine *spaceMarine) = 0;
};

#endif