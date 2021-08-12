#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include <iostream>
#include "Subaru.hpp"

int main(void)
{
    Sorcerer robert("Robert", "the Magnificent");

    Victim jim("Jimmy");
    Peon joe("Joe");

    std::cout << robert << jim << joe;

    robert.polymorph(jim);
    robert.polymorph(joe);

    return 0;
}

// int main(void)
// {
//     Sorcerer ekidona("ekidona", "Witch");
//     Subaru subaru("subaru");

//     std::cout << "------------------" << std::endl;
//     std::cout << subaru << std::endl;
//     ekidona.polymorph(subaru);

//     std::cout << "------------------" << std::endl;
//     return 0;
// }
