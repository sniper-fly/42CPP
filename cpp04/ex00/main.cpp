#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include <iostream>

int main(void)
{
    Sorcerer robert("Robert", "the Magnificent");

    Victim jim("Jimmy");
    Peon joe("Joe");

	std::cout << robert << jim << joe;

	// robert.polymorph(jim);
	// robert.polymorph(joe);
    std::cout << "--------------------" << std::endl;
	return 0;
}
