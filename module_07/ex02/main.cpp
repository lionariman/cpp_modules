#include "Array.hpp"

int getRandNum(const int range)
{
    return std::rand() % range;
}

std::string getRandString(const int bf)
{
    if (bf == 5)
    {
        std::string buf1[5] = {
            "apple",
            "grape",
            "orange",
            "banana",
            "lemon"
        };

        return buf1[getRandNum(bf)];
    }
    else if (bf == 4)
    {
        std::string buf2[4] = {
            "forest",
            "river",
            "mointain",
            "valley"
        };

        return buf2[getRandNum(bf)];
    }

    return 0;
}

void testIntBuf()
{
    std::cout << GREEN << "<================ INT ================>\n" << NCLR << std::endl;

    const int bufSize1 = 10;
    const int bufSize2 = 15;

    std::cout << BLUE << "Arr1 size: " << NCLR << bufSize1 << std::endl;
    std::cout << BLUE << "Arr2 size: " << NCLR << bufSize2 << std::endl;

    std::cout << std::endl;

    Array<int> array1(bufSize1);
    Array<int> array2(bufSize2);

    try
    {
        std::cout << BLUE << "arr1: " << NCLR;
        for (int i(0); i < bufSize1; i++)
        {
            array1[i] = getRandNum(bufSize1);
            std::cout << array1[i] << ", ";
        }
        std::cout << std::endl;

        std::cout << BLUE << "arr2: " << NCLR;
        for (int i(0); i < bufSize2; i++)
        {
            array2[i] = getRandNum(bufSize2);
            std::cout << array2[i] << ", ";
        }
        std::cout << std::endl;

        std::cout << YELLOW << "\n... Assignation operator overload using (arr1 = arr2) ..." << NCLR << std::endl;

        array1 = array2;

        for (int i(0); i < bufSize2; i++)
            std::cout << array1[i] << ", ";
        std::cout << std::endl;

        std::cout << PURPLE << "\n... Corresponding to out of range ..." << NCLR << std::endl;

        std::cout << array1[bufSize2 + 1] << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << B_RED << e.what() << NCLR << '\n';
    }
}

void testStringBuf()
{
    std::cout << GREEN << "\n<=============== STRING ==============>" << NCLR << std::endl;

    const int bufSize1 = 4;
    const int bufSize2 = 5;

    std::cout << BLUE << "Arr1 size: " << NCLR << bufSize1 << std::endl;
    std::cout << BLUE << "Arr2 size: " << NCLR << bufSize2 << std::endl;

    std::cout << std::endl;

    Array<std::string> array1(bufSize1);
    Array<std::string> array2(bufSize2);

    try
    {
        std::cout << BLUE << "arr1: " << NCLR;
        for (int i(0); i < bufSize1; i++)
        {
            array1[i] = getRandString(bufSize1);
            std::cout << array1[i] << ", ";
        }
        std::cout << std::endl;

        std::cout << BLUE << "arr2: " << NCLR;
        for (int i(0); i < bufSize2; i++)
        {
            array2[i] = getRandString(bufSize2);
            std::cout << array2[i] << ", ";
        }
        std::cout << std::endl;

        std::cout << YELLOW << "\n... Assignation operator overload using (arr1 = arr2) ..." << NCLR << std::endl;

        array1 = array2;

        for (int i(0); i < bufSize2; i++)
            std::cout << array1[i] << ", ";
        std::cout << std::endl;

        std::cout << PURPLE << "\n... Corresponding to out of range ..." << NCLR << std::endl;

        std::cout << array1[bufSize2 + 1] << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << B_RED << e.what() << NCLR << '\n';
    }
}

void testFloatBuf()
{
    std::cout << GREEN << "\n<=============== FLOAT ===============>" << NCLR << std::endl;
    const int bufSize1 = 10;
    const int bufSize2 = 15;

    std::cout << BLUE << "Arr1 size: " << NCLR << bufSize1 << std::endl;
    std::cout << BLUE << "Arr2 size: " << NCLR << bufSize2 << std::endl;

    std::cout << std::endl;

    Array<float> array1(bufSize1);
    Array<float> array2(bufSize2);

    try
    {
        std::cout << BLUE << "arr1: " << NCLR;
        for (int i(0); i < bufSize1; i++)
        {
            array1[i] = getRandNum(bufSize1);
            std::cout << array1[i] << ", ";
        }
        std::cout << std::endl;

        std::cout << BLUE << "arr2: " << NCLR;
        for (int i(0); i < bufSize2; i++)
        {
            array2[i] = getRandNum(bufSize2);
            std::cout << array2[i] << ", ";
        }
        std::cout << std::endl;

        std::cout << YELLOW << "\n... Assignation operator overload using (arr1 = arr2) ..." << NCLR << std::endl;

        array1 = array2;

        for (int i(0); i < bufSize2; i++)
            std::cout << array1[i] << ", ";
        std::cout << std::endl;

        std::cout << PURPLE << "\n... Corresponding to out of range ..." << NCLR << std::endl;

        std::cout << array1[bufSize2 + 1] << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << B_RED << e.what() << NCLR << '\n';
    }
}

int main(void)
{
    std::srand(std::time(NULL));

    testIntBuf();
    testStringBuf();
    testFloatBuf();

    // while (1);

    return 0;
}