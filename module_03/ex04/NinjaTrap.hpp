#ifndef CPP_NINJA_TRAP_HPP
# define CPP_NINJA_TRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	protected:
		// default constructor
		NinjaTrap();

	public:
		// constructor with a name parameter
		NinjaTrap(std::string name);

		// a copy constructor
		NinjaTrap(const NinjaTrap &other);

		// destructor
		~NinjaTrap();

		// an assignation operator overload
		NinjaTrap & operator = (const NinjaTrap &other);

		// set default values
		virtual void setDefaultValues();

		// ninja shoebox
		void ninjaShoebox(ClapTrap &clptp);
		void ninjaShoebox(FragTrap &frgtp);
		void ninjaShoebox(ScavTrap &scvtp);
		void ninjaShoebox(NinjaTrap &njtp);
};

#endif