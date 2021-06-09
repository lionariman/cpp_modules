#ifndef CPP_SORCERER_HPP
# define CPP_SORCERER_HPP

# include "Victim.hpp"

class Sorcerer {
	private:
	Sorcerer();
	std::string _name;
	std::string _title;

	public:
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
	Sorcerer(const Sorcerer &other);
	Sorcerer &operator=(const Sorcerer &other);

	std::string getName(void) const;
	std::string getTitle(void) const;

	void polymorph(const Victim &other) const;
};

std::ostream &operator << (std::ostream &out, const Sorcerer &sorcerer);

#endif