#include <iostream>
#include <string>

/*

Объявите фиксированный массив со следующими именами: Sasha, Ivan, John, Orlando, Leonardo, Nina, Anton и Molly.
Попросите пользователя ввести имя. Используйте цикл foreach для проверки того, не находится ли имя, введенное пользователем, уже в массиве.
*/

int main(void) {

    const int length(8);

    std::string names[length] = {
        "Sasha", "Ivan", "John", "Orlando", "Leonardo", "Nina", "Anton", "Molly"
    };

    for (const std::string &pointer : names) {
        std::cout << pointer << std::endl;
    }

    return (0);
}