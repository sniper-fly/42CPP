#include <iostream>
#include "whatever.hpp"

int main( void )
{
    int a = 2;
    int b = 3;
    ::swap( a, b
    std::cout <<
    std::cout <<
    std::cout <<
    );
    "a = " << a << ", b = " << b << std::endl;
    "min( a, b ) = " << ::min( a, b ) << std::endl;
    "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c,
    std::cout
    std::cout
    std::cout
    d);
    << "c = " << c << ", d = " << d << std::endl;
    << "min( c, d ) = " << ::min( c, d ) << std::endl;
    << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}