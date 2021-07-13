#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include <iostream>

int main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
    std::cout << "--------------------" << std::endl;
	Victim jim("Jimmy");
    std::cout << "--------------------" << std::endl;

    // jim.getPolymorphed();
    std::cout << "--------------------" << std::endl;
	Peon joe("Joe");
    std::cout << "--------------------" << std::endl;
	std::cout << robert << jim << joe;
	// robert.polymorph(jim);
	// robert.polymorph(joe);
    std::cout << "--------------------" << std::endl;
	return 0;
}
