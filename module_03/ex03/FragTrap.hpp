#ifndef CPP_FRAG_TRAP_HPP
# define CPP_FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		FragTrap();

	public:
		// constructor with name parameter
		FragTrap(std::string name);

		// copy constructor
		FragTrap(const FragTrap &other);

		// destructor
		~FragTrap();

		// an assignation operator overload
		FragTrap & operator = (const FragTrap &other);

		// vault hunter
		void vaultHunterDotExe(std::string const &target);
};

#endif