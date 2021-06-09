#ifndef CPP_PEON_HPP
# define CPP_PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	private:
	Peon();
	std::string _name;

	public:
	Peon(std::string name);
	~Peon();
	Peon(const Peon &other);
	Peon & operator = (const Peon &other);

	void getPolymorphed(void) const;
};

std::ostream & operator << (std::ostream &out, const Peon &peon);

#endif