#include "iter.hpp"

int newNumbers(int i)
{
    return i * 2;    
}

std::string newStrings(std::string line)
{
    return line + " says hello!";
}

char newChars(char c)
{
    return c + 1;
}

float newFloat(float i)
{
    return i / 10;
}

void withInt()
{
    int nums[4] = {
        1, 2, 3, 4
    };
    
    std::cout << "<============= INT ================>" << std::endl;
    iter(nums, 4, newNumbers);
    for (int i(0); i < 4; i++)
        std::cout << nums[i] << std::endl;
}

void withString()
{
    std::string names[4] = {
        "James",
        "Linda",
        "Billy",
        "Garett"
    };

    std::cout << "<============ STRING ==============>" << std::endl;
    iter(names, 4, newStrings);
    for (int i(0); i < 4; i++)
        std::cout << names[i] << std::endl;
}

void withChar()
{
    char alf[4] = {
        'a',
        'b',
        'c',
        'd'
    };

    std::cout << "<============= Char ===============>" << std::endl;
    iter(alf, 4, newChars);
    for (int i(0); i < 4; i++)
        std::cout << alf[i] << std::endl;
}

void withFloat()
{
    float fnums[4] = {
        10000.0, 1000.0, 100.0, 10.0
    };

    std::cout << "<============ FLOAT ===============>" << std::endl;
    iter(fnums, 4, newFloat);
    for (int i(0); i < 4; i++)
        std::cout << fnums[i] << std::endl;
}

int main(void)
{
    withInt();
    withString();
    withChar();
    withFloat();

    return 0;
}