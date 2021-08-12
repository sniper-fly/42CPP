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

/*
// operator= test

int main(void)
{
    ISpaceMarine* apple = new AssaultTerminator;
    ISpaceMarine* banana = new TacticalMarine;
    ISpaceMarine* carrot = new AssaultTerminator;
    Squad group;
    Squad cpy;

    group.push(apple);
    group.push(banana);
    group.push(carrot);

    std::cout << "-----operator=-----" << std::endl;
    cpy = group;
    std::cout << "-----operator= 2---" << std::endl;

    Squad cpy2;
    std::cout << "--init dada--------" << std::endl;
    ISpaceMarine* dada = new TacticalMarine;
    std::cout << "-------------------" << std::endl;
    cpy2.push(dada);
    std::cout << "---assignation-----" << std::endl;
    cpy2 = cpy;
    std::cout << "-------------------" << std::endl;
    std::cout << "---iterate it!-----" << std::endl;

    for (int i = 0; i < group.getCount(); ++i) {
        ISpaceMarine* gr1 = group.getUnit(i);
        ISpaceMarine* gr2 = cpy.getUnit(i);

        std::cout << i << ")gr1 pointer 0x" << (long)gr1 << std::endl;
        std::cout << i << ")gr2 pointer 0x" << (long)gr2 << std::endl;
    }
    std::cout << "-------------------" << std::endl;
}

*/
