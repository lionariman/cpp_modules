#ifndef CPP_POWER_FIST_HPP
# define CPP_POWER_FIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist();
        ~PowerFist();
        PowerFist(const PowerFist & other);
        PowerFist & operator=(const PowerFist & other);

        void attack() const;
};

#endif