#ifndef CPP_AWEAPON_HPP
# define CPP_AWEAPON_HPP

# include <iostream>

/*

ABSTRACT CLASS AWEAPON.

BECAUSE OF AWEAPON IS AN ABSTRACT CLASS
AN INSTANCE OF THIS CLASS CANNOT BE CREATED.

*/

class AWeapon
{
	protected:
		AWeapon();
		std::string _name;
		int _apcost;
		int _damage;

	public:
		AWeapon(const std::string & name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon(const AWeapon & other);
		AWeapon & operator = (const AWeapon & other);

		const std::string & getName() const;
		int getAPCost() const;
		int getDamage() const;
		
		virtual void attack() const = 0;
};

#endif