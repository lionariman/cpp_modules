#ifndef CPP_CHARACTER_HPP
# define CPP_CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
    private:
        Character();
        std::string _name;
        AWeapon * _weapon;
        int _numAP;

    public:
        Character(const std::string & name);
        ~Character();
        Character(const Character & other);
        Character & operator=(const Character & other);

        void recoverAP();
        void equip(AWeapon * weapon);
        void attack(Enemy * enemy);
        const std::string & getName() const;

        AWeapon * getWeapon() const;
        int getAP() const;
};

std::ostream & operator << (std::ostream & out, const Character & ch);

#endif