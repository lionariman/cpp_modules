#ifndef CPP_SCAV_TRAP_HPP
# define CPP_SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		ScavTrap();

	public:
		// constructor with name parameter
		ScavTrap(std::string name);

		// copy constructor
		ScavTrap(const ScavTrap &scavTrapInstance);

		// destructor
		~ScavTrap();

		// an assignation operator overload
		ScavTrap & operator = (const ScavTrap &scavTrapInstance);

		// newscomer
		void challengeNewscomer();
};

#endif