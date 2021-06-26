#ifndef CPP_EASYFIND_HPP
# define CPP_EASYFIND_HPP

# include <iostream>
# include <string>
# include <vector>
# include <map>
# include <stack>
# include <queue>
# include <set>
# include <array>
# include <list>
# include <algorithm>

# define NCLR        "\033[0m"
# define BLACK       "\033[0;30m"
# define WHITE       "\033[0;37m"
# define YELLOW      "\033[0;33m"
# define RED         "\033[0;31m"
# define GREEN       "\033[0;32m"
# define CYAN        "\033[0;36m"
# define BLUE        "\033[0;34m"
# define PURPLE      "\033[0;35m"
# define B_GRAY      "\033[1;30m"
# define B_WHITE     "\033[1;37m"
# define B_RED       "\033[1;31m"
# define B_YELLOW    "\033[1;33m"
# define B_GREEN     "\033[1;32m"
# define B_CYAN      "\033[1;36m"
# define B_BLUE      "\033[1;34m"
# define B_PURPLE    "\033[1;35m"

class itemNotFoundException : public std::exception
{
    public:
        const char *what() const throw()
        {
            return "Unfortunately we cannot found such element ;((";
        }
};

template<typename T>
typename T::iterator easyfind(T &array, int const item)
{
    typename T::iterator it;

    for (it = array.begin(); it != array.end(); it++)
    {
        if (*it == item)
            return it;
    }
    throw itemNotFoundException();
}

#endif