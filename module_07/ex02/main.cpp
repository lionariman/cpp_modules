#include "Array.hpp"

int getRandNum(const int range)
{
    return std::rand() % range;
}

std::string getRandString()
{
    const int bufSize = 5;

    std::string buf[bufSize] = {
        "apple",
        "grape",
        "orange",
        "banana",
        "lemon"
    };

    return buf[getRandNum(bufSize)];
}

void testIntBuf()
{
    std::cout << "<================ INT ================>\n" << std::endl;

    const int bufSize = 10;

    Array<int> array1(bufSize);
    Array<int> array2(bufSize);

    try
    {
        std::cout << "arr1: ";
        for (int i(0); i < bufSize; i++)
        {
            array1[i] = getRandNum(bufSize);
            std::cout << array1[i] << ", ";
        }
        std::cout << std::endl;

        std::cout << "arr2: ";
        for (int i(0); i < bufSize; i++)
        {
            array2[i] = getRandNum(bufSize);
            std::cout << array2[i] << ", ";
        }
        std::cout << std::endl;

        std::cout << "\nSome random value from arra1: " << array1[getRandNum(bufSize)] << std::endl;
        std::cout << "\nSome random value from arra2: " << array1[getRandNum(bufSize)] << std::endl;

        std::cout << "\n... Assignation operator overload using (arr1 = arr2) ..." << std::endl;

        array1 = array2;

        for (int i(0); i < bufSize; i++)
            std::cout << array1[i] << ", ";
        std::cout << std::endl;

        std::cout << "\n... Corresponding to out of range ..." << std::endl;

        std::cout << array1[bufSize + 1] << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void testStringBuf()
{
    std::cout << "\n<=============== STRING ==============>" << std::endl;

    const int bufSize = 10;

    Array<std::string> array1(bufSize);
    Array<std::string> array2(bufSize);

    try
    {
        std::cout << "arr1: ";
        for (int i(0); i < bufSize; i++)
        {
            array1[i] = getRandString();
            std::cout << array1[i] << ", ";
        }
        std::cout << std::endl;

        std::cout << "arr2: ";
        for (int i(0); i < bufSize; i++)
        {
            array2[i] = getRandString();
            std::cout << array2[i] << ", ";
        }
        std::cout << std::endl;

        std::cout << "\nSome random value from arra1: " << array1[getRandNum(bufSize)] << std::endl;
        std::cout << "\nSome random value from arra2: " << array1[getRandNum(bufSize)] << std::endl;

        std::cout << "\n... Assignation operator overload using (arr1 = arr2) ..." << std::endl;

        array1 = array2;

        for (int i(0); i < bufSize; i++)
            std::cout << array1[i] << ", ";
        std::cout << std::endl;

        std::cout << "\n... Corresponding to out of range ..." << std::endl;

        std::cout << array1[bufSize + 1] << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void testFloatBuf()
{
    std::cout << "\n<=============== FLOAT ===============>" << std::endl;
    const int bufSize = 10;

    Array<float> array1(bufSize);
    Array<float> array2(bufSize);

    try
    {
        std::cout << "arr1: ";
        for (int i(0); i < bufSize; i++)
        {
            array1[i] = getRandNum(bufSize);
            std::cout << array1[i] << ", ";
        }
        std::cout << std::endl;

        std::cout << "arr2: ";
        for (int i(0); i < bufSize; i++)
        {
            array2[i] = getRandNum(bufSize);
            std::cout << array2[i] << ", ";
        }
        std::cout << std::endl;

        std::cout << "\nSome random value from arra1: " << array1[getRandNum(bufSize)] << std::endl;
        std::cout << "\nSome random value from arra2: " << array1[getRandNum(bufSize)] << std::endl;

        std::cout << "\n... Assignation operator overload using (arr1 = arr2) ..." << std::endl;

        array1 = array2;

        for (int i(0); i < bufSize; i++)
            std::cout << array1[i] << ", ";
        std::cout << std::endl;

        std::cout << "\n... Corresponding to out of range ..." << std::endl;

        std::cout << array1[bufSize + 1] << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
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