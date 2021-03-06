#ifndef CPP_SUPER_TRAP_HPP
# define CPP_SUPER_TRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	private:
		SuperTrap();

	public:
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap &other);
		~SuperTrap();
		SuperTrap & operator = (const SuperTrap & other);
		void setDefaultValues(void);
		void printValues(void);
};

#endif