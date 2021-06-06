#ifndef CPP_FRAG_TRAP_HPP
# define CPP_FRAG_TRAP_HPP

# define PINK "\x1b[35m"
# define BLUE "\x1b[34m"
# define GREEN "\x1b[32m"
# define CYAN "\x1b[36m"
# define RED "\x1b[31m"

# include <iostream>

class FragTrap
{
	private:
		std::string name;
		int hitPoints;
		int maxHitPoints;
		int energyPoints;
		int maxEnergyPoints;
		int level;
		int meleeAttackDamage;
		int rangedAttackDamage;
		int armorDamageReduction;
		FragTrap();

	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &fragTrapInstance);
		~FragTrap();
		FragTrap & operator = (const FragTrap &fragTrapInstance);
		void setDefaultValues();

		std::string getName(void);
		int getHitPoints(void);
		int getEnergyPoints(void);

		void setName(std::string value);

		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaultHunterDotExe(std::string const &target);
};

#endif