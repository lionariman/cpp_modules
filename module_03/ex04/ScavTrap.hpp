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
		ScavTrap(const ScavTrap &other);

		// destructor
		~ScavTrap();

		// an assignation operator overload
		ScavTrap & operator = (const ScavTrap &other);

		// newscomer
		void challengeNewscomer();
};

#endif