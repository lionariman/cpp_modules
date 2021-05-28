#ifndef HUMAN_B_CPP
# define HUMAN_B_CPP

# include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
		Weapon	*_weapon;

    public:
		HumanB(std::string name);
		~HumanB();
        void    attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif