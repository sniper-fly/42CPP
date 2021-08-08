#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"
#include <iostream>

// /*
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
// */

//TacticalMarine AssaultTerminator test
/*
int main()
{
    ISpaceMarine* test = new TacticalMarine;
    std::cout << "----------------" << std::endl;
    test->battleCry();
    test->rangedAttack();
    test->meleeAttack();
    std::cout << "----------------" << std::endl;
    ISpaceMarine* clone = test->clone();
    clone->battleCry();
    clone->rangedAttack();
    clone->meleeAttack();
    std::cout << "----------------" << std::endl;
    delete test;
    std::cout << "----------------" << std::endl;
    std::cout << "----------------" << std::endl;

    ISpaceMarine* assalt = new AssaultTerminator;
    std::cout << "----------------" << std::endl;
    assalt->battleCry();
    assalt->rangedAttack();
    assalt->meleeAttack();
    std::cout << "----------------" << std::endl;
    ISpaceMarine* clone2 = assalt->clone();
    clone2->battleCry();
    clone2->rangedAttack();
    clone2->meleeAttack();
    std::cout << "----------------" << std::endl;
    delete assalt;
    std::cout << "----------------" << std::endl;
    std::cout << "----------------" << std::endl;
    delete clone;
    delete clone2;
}
*/
