#include <iostream>

int		main(void)
{
	srand(time(0));
	std::cout << rand() % 10 << std::endl;
}
