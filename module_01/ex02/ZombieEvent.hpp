#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

# include "Zombie.hpp"

class ZombieEvent
{
	private:
	std::string type;

	public:
		ZombieEvent();
		~ZombieEvent();
		void	setZombieType(std::string type);
		Zombie*	newZombie(std::string name);
		void	randomChump(void);
		std::string	getRandName(void);
		std::string	getRandType(void);
};

#endif