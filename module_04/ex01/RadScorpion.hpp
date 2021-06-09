#ifndef CPP_RAD_SCORPION_HPP
# define CPP_RAD_SCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{   
    public:
        RadScorpion();
        ~RadScorpion();
        RadScorpion(const RadScorpion & other);
        RadScorpion & operator=(const RadScorpion & other);

        void takeDamage(int amount);
};

#endif