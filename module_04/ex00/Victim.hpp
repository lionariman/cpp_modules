#ifndef CPP_VICTIM_HPP
# define CPP_VICTIM_HPP

# include <iostream>

class Victim {
	protected:
	Victim();
	std::string _name;

	public:
	Victim(std::string name);
	virtual ~Victim();
	Victim(const Victim &other);
	Victim &operator=(const Victim &other);

	std::string getName(void) const;

	virtual void getPolymorphed(void) const;

};

std::ostream & operator << (std::ostream &out, const Victim &victim);

#endif