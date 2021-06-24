#include "whatever.hpp"
#include "Awesome.hpp"

void subject_test()
{
    int a = 2;
    int b = 3;

    ::swap( a, b );

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);

    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}

void awesome_test()
{
    Awesome a(5);
    Awesome b(3);

    std::cout << "a = " << a.getInt() << ", b = " << b.getInt() << std::endl;
    
    swap(a, b);

    std::cout << "a = " << a.getInt() << ", b = " << b.getInt() << std::endl;
}

int main( void )
{

    subject_test();
    awesome_test();

    return 0;
}