#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);


// /* 追加テスト
    std::cout << "--------------------" << std::endl;
//  Icharacter, IMateriaSourceが4つ以上Materiaを装備するパターン
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    AMateria* fifth = new Ice();
    src->learnMateria(fifth); // 5つめ
    delete fifth;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice"); //5つ目
    me->equip(tmp);
    delete tmp;

// characterのコピーやアサインはdeep copyか？
    Character a("a");
    Character b("b");
    Character c(a);

    std::cout << a.getName() << " : " << &a.getName() << " : "
    << &a << std::endl;
    std::cout << b.getName() << " : " << &b.getName() << " : "
    << &b << std::endl;
    std::cout << c.getName() << " : " << &c.getName() << " : "
    << &c << std::endl;
    a = b;
    std::cout << a.getName() << " : " << &a.getName() << " : "
    << &a << std::endl;
// */

    delete bob;
    delete me;
    delete src;

    return 0;
}
