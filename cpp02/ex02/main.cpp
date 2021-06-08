#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}

// int main(void) {
// 	Fixed a;
// 	Fixed b(20);
// 	// Fixed const b(Fixed(5.05f) * Fixed(2));

// 	std::cout << "A: " << a << std::endl;
// 	std::cout << "++A: " << ++a << std::endl;
// 	std::cout << "A: " << a << std::endl;
// 	std::cout << "A++: " << a++ << std::endl;
// 	std::cout << "A: " << a << std::endl;
// 	std::cout << "--A " << --a << std::endl;
// 	std::cout << "A-- " << a-- << std::endl;
// 	std::cout << "A: " << a << std::endl;
// 	std::cout << "++(++A) " << ++(++a) << std::endl;
// 	std::cout << "B: " << b << std::endl;
// 	std::cout << "A + B: " << a + b << std::endl;
// 	std::cout << "A: " << a << std::endl;
// 	std::cout << "A - B: " << a - b << std::endl;
// 	std::cout << "A * B: " << a * b << std::endl;
// 	std::cout << "---  A = -21, B = 4  ---" << std::endl;
// 	a = Fixed(-21) ; b = Fixed(4);
// 	std::cout << "A / B: " << a / b << std::endl;

// 	std::cout << "A < B: " << std::boolalpha << (a < b) << std::endl;
// 	std::cout << "A > B: " << std::boolalpha << (a > b) << std::endl;
// 	std::cout << "Max(A, B): " << Fixed::max(a, b) << std::endl;
// 	std::cout << "Min(A, B): " << Fixed::min(a, b) << std::endl;

// 	const Fixed c(241);
// 	const Fixed d(-12);

// 	std::cout << "Max(c, d): " << Fixed::max(c, d) << std::endl;
// 	std::cout << "Min(c, d): " << Fixed::min(c, d) << std::endl;
// 	return (0);
// }
