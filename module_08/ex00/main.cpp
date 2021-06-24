#include "easyfind.hpp"

int main(void)
{
    const int buf_size = 12;

    std::vector<int> my_vector;
    std::vector<int>::iterator iter;

    for (int i(0); i < buf_size; i++)
    {
        my_vector.push_back(i);
        std::cout << PURPLE << i << ", " << NCLR;
    }
    std::cout << "\n";

    // try
    // {
    //     // name_of_easyfind_constructor(my_vector, iter);
    //     // 
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    

    return 0;
}