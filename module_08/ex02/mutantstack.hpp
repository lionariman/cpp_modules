#ifndef CPP_MUTANTSTACK_HPP
# define CPP_MUTANTSTACK_HPP

# include <iostream>
# include <stack>

# define NCLR        "\033[0m"
# define BLACK       "\033[0;30m"
# define WHITE       "\033[0;37m"
# define YELLOW      "\033[0;33m"
# define RED         "\033[0;31m"
# define GREEN       "\033[0;32m"
# define CYAN        "\033[0;36m"
# define BLUE        "\033[0;34m"
# define PURPLE      "\033[0;35m"
# define B_GRAY      "\033[1;30m"
# define B_WHITE     "\033[1;37m"
# define B_RED       "\033[1;31m"
# define B_YELLOW    "\033[1;33m"
# define B_GREEN     "\033[1;32m"
# define B_CYAN      "\033[1;36m"
# define B_BLUE      "\033[1;34m"
# define B_PURPLE    "\033[1;35m"

template<typename T>
class MutantStack : public std::stack<T>
{
private:
    T *ibegin;
    T *iend;
    int flag;

public:
    // MauntStack constructor
    MutantStack() : std::stack<T>(), ibegin(nullptr), iend(nullptr), flag(0) {};

    // MauntStack destructor
    virtual ~MutantStack() {};

    // MauntStack copy constructor
    MutantStack(MutantStack const &other) { *this = other; };

    // MauntStack assignation operator overload
    MutantStack &operator=(MutantStack const &other)
    {
        if (this == &other)
            return *this;
        this->ibegin = other.ibegin;
        this->iend = other.iend;
        this->flag = other.flag;
        this->c = other.c;
        return *this;
    };

    // overloaded function from the stack class to push T type values
    virtual void push(T const &object)
    {
        std::stack<T>::push(object);
        if (this->flag == 0)
        {
            this->ibegin = &std::stack<T>::top();
            this->iend = &std::stack<T>::top();
            this->flag = 1;
        }
        else
            this->iend = &std::stack<T>::top();
    }

    // iterator class is a smart pointer to point to each element of the stack
    class iterator
    {
        private:
            T *pointer;
        
        public:
            iterator() : pointer(nullptr) {}

            ~iterator() { this->pointer = nullptr; }

            iterator(T *newPointer) : pointer(newPointer) {}

            iterator(T const &other) { this->pointer = other.pointer; }

            iterator &operator = (iterator const &other) { this->pointer = other.pointer; }

            iterator &operator ++ ()
            {
                this->pointer++;
                return *this;
            }

            iterator &operator -- ()
            {
                this->pointer--;
                return *this;
            }

            bool operator == (iterator &other)
            {
                return this->pointer == other.pointer;
            }

            bool operator != (iterator &other)
            {
                return this->pointer != other.pointer;
            }

            bool operator > (iterator &other)
            {
                return this->pointer > other.pointer;
            }

            bool operator < (iterator &other)
            {
                return this->pointer < other.pointer;
            }

            bool operator <= (iterator &other)
            {
                return this->pointer <= other.pointer;
            }

            bool operator >= (iterator &other)
            {
                return this->pointer >= other.pointer;
            }

            T &operator * ()
            {
                return *this->pointer;
            }
    };

     // overloaded function from the stack class to get begin of the stack of T type values
    T *begin()
    {
        return this->ibegin;
    }

    // overloaded function from the stack class to get end of the stack of T type values
    T *end()
    {
        return ++this->iend;
    }

    // T *begin()
    // {
    //     typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    //     return this->c.begin();
    // }

    // const_iterator end()
    // {
    //     return this->c.end();
    // }

    // typedef typename std::stack<T>container_type::revers_iterator revers_iterator;
    // revers_iterator rbegin()
    // {
    //     return this->c.rbegin();
    // }

    // revers_iterator rend()
    // {
    //     return this->c.rend();
    // }
};

// # include "mutantstack.ipp"

#endif