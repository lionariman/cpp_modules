#ifndef PONY_H
# define PONY_H

# include <iostream>

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
		void setPonyData(int age, std:string name,
				std::string color, std::string favoriteFood);
		int getPonyAge(void);
		std::string getPonyName(void);
		std::string getPonyColor(void);
		std::string getPonyFavoriteFood(void);
};

#endif