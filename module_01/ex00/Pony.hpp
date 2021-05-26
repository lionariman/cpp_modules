#ifndef PONY_H
# define PONY_H

# include <iostream>

# define PINK "\x1b[35m"
# define BLUE "\x1b[34m"
# define GREEN "\x1b[32m"

class Pony
{
	private:
		int age;
		std::string name;
		std::string color;
		std::string favoriteFood;

	public:
		Pony();
		~Pony();
		void setPonyData(int age, std::string name, std::string color, std::string favoriteFood);
		int getPonyAge(void);
		std::string getPonyName(void);
		std::string getPonyColor(void);
		std::string getPonyFavoriteFood(void);
};

#endif