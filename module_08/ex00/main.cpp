#include "easyfind.hpp"

void test_vector()
{
    std::vector<int> vec;

    for (int i(0); i < 10; i++)
        vec.push_back(20 - i);

    for (int i(0); i < static_cast<int>(vec.size()); i++)
        std::cout << PURPLE << vec[i] << ' ' << NCLR;
    
    std::cout << '\n';

    return ;
}

void test_deque()
{
    std::deque<int> deq;

    for (int i(0); i < 4; i++)
    {
        deq.push_back(i); // put a number at the end of the array
        deq.push_front(10 - i); // put a number at the beginnig of the array
    }

    for (int i(0); i < static_cast<int>(deq.size()); i++)
        std::cout << PURPLE << deq[i] << ' ' << NCLR;

    std::cout << '\n';

    return ;
}

void test_list()
{
    std::list<int> ls;

    for (int i(0); i < 10; i++)
    {
        ls.push_back(i);
        ls.push_front(20 - i);
    }

    for (std::list<int>::const_iterator iter = ls.begin(); iter != ls.end(); iter++)
        std::cout << PURPLE << *iter << ' ' << NCLR;

    std::cout << '\n';

    return ;
}

void test_map()
{
    std::map<int, std::string> mp;

    mp.insert(std::make_pair(3, "cat"));
    mp.insert(std::make_pair(2, "dog"));
    mp.insert(std::make_pair(5, "chicken"));
    mp.insert(std::make_pair(1, "lion"));
    mp.insert(std::make_pair(9, "spider"));

    std::map<int, std::string>::const_iterator iter;
    iter = mp.begin();
    while (iter != mp.end())
    {
        std::cout << PURPLE << iter->first << " = " << iter->second << NCLR << std::endl;
        iter++;
    }

    // std::cout << '\n';
}

int main(void)
{
    std::cout << GREEN << " ^^ Vector ^^ " << NCLR << std::endl;
    test_vector();
    std::cout << GREEN << "\n ^^ Deque ^^ " << NCLR << std::endl;
    test_deque();
    std::cout << GREEN << "\n ^^ List ^^ " << NCLR << std::endl;
    test_list();
    std::cout << GREEN << "\n ^^ Map ^^ " << NCLR << std::endl;
    test_map();

    return 0;
}