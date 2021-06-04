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
		// default constructor
		FragTrap();

	public:
		// constructor with name parameter
		FragTrap(std::string name);

		// copy constructor
		FragTrap(const FragTrap &fragTrapInstance);

		// destructor
		~FragTrap();

		// an assignation operator overload
		FragTrap & operator = (const FragTrap &fragTrapInstance);

		// set default parameter for each field exept name
		void setDefaultValues();

		// ========= getters =========
		std::string getName(void);
		int getHitPoints(void);
		// int getMaxHitPoints(void);
		int getEnergyPoints(void);
		// int getMaxEnergyPoints(void);
		// int getLevel(void);
		// int getMeleeAttackDamage(void);
		// int getRangedAttackDamage(void);
		// int getArmorDamageReduction(void);
		// ========= getters =========

		// ========= setters =========
		void setName(std::string value);
		// ========= setters =========

		// default functions from subject
		void rangedAttack(std::string const &target); // дальняя атака
		void meleeAttack(std::string const &target); // ближняя атака
		void takeDamage(unsigned int amount); // получение урона
		void beRepaired(unsigned int amount); // восстановление очков жизни

		// vault hunter
		void vaultHunterDotExe(std::string const &target);
};

#endif