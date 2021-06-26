#include "easyfind.hpp"

void test_vector()
{
    std::vector<int> vec;
    std::vector<int>::iterator it;

    for (int i(0); i < 10; i++)
        vec.push_back(20 - i);

    for (int i(0); i < static_cast<int>(vec.size()); i++)
        std::cout << PURPLE << vec[i] << ' ' << NCLR;

    std::cout << '\n';

    std::cout << YELLOW << "What element are you looking for? -> " << NCLR;

    int elem;
    std::cin >> elem;

    it = easyfind(vec, elem);
    std::cout << YELLOW << "Yes! There is such an element - " << NCLR << *it << std::endl;
    
    return ;
}

void test_deque()
{
    std::deque<int> deq;
    std::deque<int>::iterator it;

    for (int i(0); i < 4; i++)
    {
        deq.push_back(i);
        deq.push_front(10 - i);
    }

    for (int i(0); i < static_cast<int>(deq.size()); i++)
        std::cout << PURPLE << deq[i] << ' ' << NCLR;

    std::cout << '\n';

    std::cout << YELLOW << "What element are you looking for? -> " << NCLR;

    int elem;
    std::cin >> elem;

    it = easyfind(deq, elem);
    std::cout << YELLOW << "Yes! There is such an element - " << NCLR << *it << std::endl;

    return ;
}

void test_list()
{
    std::list<int> ls;
    std::list<int>::iterator it;

    for (int i(0); i < 4; i++)
    {
        ls.push_back(i);
        ls.push_front(10 - i);
    }

    for (std::list<int>::const_iterator iter = ls.begin(); iter != ls.end(); iter++)
        std::cout << PURPLE << *iter << ' ' << NCLR;

    std::cout << '\n';

    std::cout << YELLOW << "What element are you looking for? -> " << NCLR;

    int elem;
    std::cin >> elem;

    it = easyfind(ls, elem);
    std::cout << YELLOW << "Yes! There is such an element - " << NCLR << *it << std::endl;

    return ;
}

int main(void)
{
    std::cout << GREEN << " ^^ Vector ^^ " << NCLR << std::endl;
    try
    {
        test_vector();
    }
    catch(std::exception &e)
    {
        std::cout << B_RED << e.what() << NCLR << std::endl;
    }

    std::cout << GREEN << "\n ^^ Deque ^^ " << NCLR << std::endl;
    try
    {
        test_deque();
    }
    catch(std::exception &e)
    {
        std::cout << B_RED << e.what() << NCLR << std::endl;
    }

    std::cout << GREEN << "\n ^^ List ^^ " << NCLR << std::endl;
    try
    {
        test_list();
    }
    catch(std::exception &e)
    {
        std::cout << B_RED << e.what() << NCLR << std::endl;
    }

    return 0;
}