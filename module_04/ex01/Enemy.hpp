#ifndef CPP_ENEMY_HPP
# define CPP_ENEMY_HPP

# include <iostream>

class Enemy
{
    protected:
        Enemy();
        int _hp;
        std::string _type;

    public:
        Enemy(int hp, const std::string & type);
        virtual ~Enemy();
        Enemy(const Enemy & other);
        Enemy & operator=(const Enemy & other);

        const std::string & getType() const;
        int getHP() const;

        virtual void takeDamage(int amount);
};

#endif