#include "Serialization.hpp"

Serialization::Serialization() {}

Serialization::~Serialization() {}

Serialization::Serialization(Serialization const &other) {
    (void)other;
}

Serialization &Serialization::operator=(Serialization const &other) {
    (void)other;
    return *this;
}

std::string Serialization::getRandStr() {

    std::string randStrings[5] = {
        "Random string 1",
        "Random string 2",
        "Random string 3",
        "Random string 4",
        "Random string 5",
    };

    return randStrings[rand() % 5];
}

int Serialization::getRandInt() {
    return std::rand() % 100;
}

void *Serialization::serialize() {

    std::srand(std::time(NULL));

    char *ptr = new char[52];
    Data *data = new Data;

    data->str1 = getRandStr();
    data->number = getRandInt();
    data->str2 = getRandStr();

    std::cout << "<=========== DATA INFO ===========>" << std::endl;
    std::cout << "STR 1: " + data->str1 << std::endl;
    std::cout << "NUM:   " << data->number << std::endl;
    std::cout << "STR 2: " + data->str2 << std::endl;
    std::cout << "<=================================>" << std::endl;

    memcpy(ptr, &data->str1, 24);
    memcpy(ptr + 24, &data->number, 4);
    memcpy(ptr + 28, &data->str2, 24);
    std::cout << "\nSerialization was successfull\n" << std::endl;

    return ptr;
}

Data *Serialization::deserialize(void *raw) {
    Data *data = new Data;

    data->str1 = *reinterpret_cast<std::string *>(raw);
    data->number = *reinterpret_cast<int *>((char *)raw + 24);
    data->str2 = *reinterpret_cast<std::string *>((char *)raw + 28);
    std::cout << "Deserialization was successfull\n" << std::endl;

    return data;
}