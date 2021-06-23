#include "Base.hpp"

Base *generate()
{
    std::srand(std::time(NULL));

    switch (std::rand() % 3)
    {
        case 0:
            return new A;
        case 1:
            return new B;
        case 2:
            return new C;
    }
    return nullptr;
}

void identify_from_pointer(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "(identify from pointer) -> A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "(identify from pointer) -> B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "(identify from pointer) -> C" << std::endl;
}

/*

Поскольку в языке C++ не существует «нулевой ссылки»,
то dynamic_cast не может возвратить «нулевую ссылку» при сбое. 
Вместо этого, dynamic_cast генерирует исключение типа std::bad_cast

*/

void identify_from_reference(Base &p)
{
    try
    {
        A a = dynamic_cast<A&>(p);
        std::cout << "(identify from reference) -> A" << std::endl;
    }
    catch(const std::bad_cast &e) {}

    try
    {
        B b = dynamic_cast<B&>(p);
        std::cout << "(identify from reference) -> B" << std::endl;
    }
    catch(const std::bad_cast &e) {}

    try
    {
        C c = dynamic_cast<C&>(p);
        std::cout << "(identify from reference) -> C" << std::endl;
    }
    catch(const std::bad_cast &e) {}
}

int main(void)
{
    Base *randomChildClass = generate();

    identify_from_pointer(randomChildClass);
    identify_from_reference(*randomChildClass);

    return 0;
}