#ifndef REPLACE_CPP
# define REPLACE_CPP

# define PINK "\x1b[35m"
# define BLUE "\x1b[34m"
# define GREEN "\x1b[32m"
# define CYAN "\x1b[36m"
# define RED "\x1b[31m"

# include <iostream>
# include <fstream>

typedef std::string string;

class   Replace
{
    private:
        string	_name;
        string	_s1;
        string	_s2;

	public:
		// Constructor
		Replace();
		// Destructor
		~Replace();

		// Getters
		string	getName(void);
		string	getS1(void);
		string	getS2(void);

		// Setters
		void	setName(string name);
		void	setS1(string s1);
		void	setS2(string s2);
};

#endif