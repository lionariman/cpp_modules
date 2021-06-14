#ifndef CPP_BUDDY_HPP
# define CPP_BUDDY_HPP

# include "Victim.hpp"

class Buddy : public Victim
{
	private:
	Buddy();
	std::string _name;

	public:
	Buddy(std::string name);
	~Buddy();
	Buddy(const Buddy &other);
	Buddy & operator = (const Buddy &other);

	void getPolymorphed(void) const;
};

std::ostream & operator << (std::ostream &out, const Buddy &buddy);

#endif