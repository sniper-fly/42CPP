#include <iostream>
#include "whatever.hpp"

/*
int main( void )
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

    return 0;
}
*/

int main()
{
    //別の型でも同じ関数でスワップできるか
    double a = 3.14;
    double b = 4.14;
    double a_ = a;
    double b_ = b;
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    if (a == a_ || b == b_) {
        std::cout << "swap failure" << std::endl;
        return 1;
    }

    //別の型でも最大最小を取れるか
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    if (min(a, b) != a_) {
        std::cout << "min wrong" << std::endl;
        return 1;
    }
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    if (max(a, b) != b_) {
        std::cout << "max wrong" << std::endl;
        return 1;
    }

    //同じ値だったとき二番目の値を返しているか（ポインタのアドレスがｂに等しいか）
    double c = 13.31;
    double d = 13.31;
    double *maxp;
    double *minp;
    maxp = &(max(c, d));
    minp = &(min(c, d));
    if (maxp != &d) {
        std::cout << "didn't return second one" << std::endl;
    }
    if (minp != &d) {
        std::cout << "didn't return second one" << std::endl;
    }
}
