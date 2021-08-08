#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"
#include <iostream>

/*
int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);

    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
    return 0;
}
*/

/* //TacticalMarine test
int main()
{
    ISpaceMarine* test = new TacticalMarine;
    std::cout << "----------------" << std::endl;
    test->battleCry();
    std::cout << "----------------" << std::endl;
    test->rangedAttack();
    std::cout << "----------------" << std::endl;
    test->meleeAttack();
    std::cout << "----------------" << std::endl;
    delete test;
    std::cout << "----------------" << std::endl;
}
*/
