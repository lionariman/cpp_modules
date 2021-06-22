#include "Serialization.hpp"

int main(void)
{
    Serialization s;

    void *serialized;
    Data *deserialized;

    serialized = s.serialize();
    deserialized = s.deserialize(serialized);

    std::cout << "STR 1: " + deserialized->str1 << std::endl;
    std::cout << "NUM  : " << deserialized->number << std::endl;
    std::cout << "STR 2: " + deserialized->str2 << std::endl;

    return 0;
}