#include "iter.hpp"
#include "Awesome.hpp"

void testInt()
{
    std::cout << "<============= INT ================>" << std::endl;
    int nums[4] = {
        1, 2, 3, 4
    };
    
    iter(nums, 4, print);
}

void testString()
{
    std::cout << "<============ STRING ==============>" << std::endl;
    std::string names[4] = {
        "James",
        "Linda",
        "Billy",
        "Garett"
    };

    iter(names, 4, print);
}

void testChar()
{
    std::cout << "<============= Char ===============>" << std::endl;
    char alf[4] = {
        'a',
        'b',
        'c',
        'd'
    };

    iter(alf, 4, print);
}

void testFloat()
{
    std::cout << "<============ FLOAT ===============>" << std::endl;
    float fnums[4] = {
        10000.0, 1000.0, 100.0, 10.0
    };

    iter(fnums, 4, print);
}

void testAwesome()
{
    std::cout << "<============ AWESOME =============>" << std::endl;
    int tab[] = { 0, 1, 2, 3, 4 };

    Awesome tab2[5];

    iter(tab, 5, print);
    iter(tab2, 5, print);
}

int main(void)
{
    testInt();
    testString();
    testChar();
    testFloat();
    testAwesome();

    return 0;
}
