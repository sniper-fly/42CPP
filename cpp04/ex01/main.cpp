#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Excalibur.hpp"
#include "Bondrewd.hpp"

/*
int main()
{
    Character* me = new Character("me");
    Enemy* sm = new SuperMutant();
    AWeapon* pr = new PlasmaRifle();

    me->attack(sm);
    std::cout << "AP is now " << me->getAP() << std::endl;
    me->equip(pr);
    me->attack(sm);
    me->attack(sm);
    std::cout << "AP is now " << me->getAP() << std::endl;
    me->recoverAP();
    std::cout << "AP recovered." << std::endl;
    std::cout << "AP is now " << me->getAP() << std::endl;

    AWeapon* seiken = new Excalibur();
    Enemy* bon = new Bondrewd();

    me->equip(seiken);
    me->attack(bon);
    me->attack(bon);
    me->recoverAP();
    me->recoverAP();
    me->recoverAP();
    me->recoverAP();
    std::cout << "AP recovered." << std::endl;
    me->attack(bon);

    delete me;
    delete sm;
    delete pr;
    delete seiken;
}
*/

int main()
{
    Character* me = new Character("me");

    std::cout << *me;

    Enemy* b = new RadScorpion();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    me->equip(pr);
    std::cout << *me;
    me->equip(pf);

    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;

    delete me;
    delete pr;
    delete pf;
    return 0;
}
