#ifndef CPP_ISPACE_MARINE_HPP
# define CPP_ISPACE_MARINE_HPP

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine();
		virtual ISpaceMarine *clone() const = 0;
		virtual void battleCry() const = 0;
		virtual void rangedAttack() const = 0;
		virtual void meleeAtaack() const = 0;
};

#endif