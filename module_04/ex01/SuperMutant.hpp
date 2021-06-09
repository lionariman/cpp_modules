#ifndef CPP_SUPER_MUTANT_HPP
# define CPP_SUPER_MUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        SuperMutant();
        ~SuperMutant();
        SuperMutant(const SuperMutant & other);
        SuperMutant & operator=(const SuperMutant & other);

        void takeDamage(int amount);
};

#endif