#ifndef CPP_PLASMA_RIFLE_HPP
# define CPP_PLASMA_RIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		~PlasmaRifle();
		PlasmaRifle(const PlasmaRifle & other);
		PlasmaRifle & operator = (const PlasmaRifle & other);

		void attack() const;
	
};

#endif