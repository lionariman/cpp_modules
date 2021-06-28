#include "mutantstack.hpp"

void startStack()
{
    MutantStack<int> mstack;
    std::cout << PURPLE << "\n** STACK 1 IS CREATED **\n" << NCLR << std::endl;

    mstack.push(5);
    std::cout << CYAN << "> PUSH " << mstack.top() << " <" << NCLR << std::endl;
    mstack.push(17);
    std::cout << CYAN << "> PUSH " << mstack.top() << " <" << NCLR << std::endl;

    std::cout << BLUE << "\nTOP -> " << mstack.top() << std::endl;

    mstack.pop();
    std::cout << YELLOW << "\n> POP <" << NCLR << std::endl;

    std::cout << PURPLE << "\nSTACK SIZE -> " << mstack.size() << '\n' << NCLR << std::endl;

    mstack.push(3);
    std::cout << CYAN << "> PUSH 3 <" << NCLR << std::endl;
    mstack.push(5);
    std::cout << CYAN << "> PUSH 5 <" << NCLR << std::endl;
    mstack.push(737);
    std::cout << CYAN << "> PUSH 737 <" << NCLR << std::endl;
    mstack.push(0);
    std::cout << CYAN << "> PUSH 0 <" << NCLR << std::endl;

    std::cout << PURPLE << "\n** BEGIN ITERATOR CREATED **" << NCLR << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    std::cout << PURPLE << "\n** END ITERATOR CREATED **" << NCLR << std::endl;
    MutantStack<int>::iterator ite = mstack.end();

    std::cout << CYAN << "\n <===> ALL PUSHED ITEMS <===>\n" << NCLR << std::endl;
    int i(0);
    while (it != ite)
    {
        std::cout << CYAN << i << ": " << *it << NCLR << std::endl;
        ++it;
        ++i;
    }
    std::cout << PURPLE << "\nSTACK SIZE -> " << mstack.size() << NCLR << std::endl;

    std::stack<int> s(mstack);

    std::cout << PURPLE << "\n** STACK 1 COPY IS CREATED **\n" << NCLR << std::endl;

    std::cout << BLUE << "TOP -> " << s.top() << std::endl;

    return ;
}

int main()
{
    std::cout << GREEN << "\n>>>>>>>>>>>>>>>>>>>>>>>>>> START <<<<<<<<<<<<<<<<<<<<<<<<<<" << NCLR << std::endl;

    startStack();

    // while(1);

    return 0;
}