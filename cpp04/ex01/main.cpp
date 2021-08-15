#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

// /*
int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
}
// */

//dog, catはコンストラクタの時にBrain変数を持つ(new)
//コンストラクタとデストラクタで適当なアウトプット
//コピーコンストラクタはディープコピーじゃないとダメ
//mainでanimalの配列を作って半分はCat、半分はDog

/*
int main()
{
    const WrongAnimal* wrong_cat = new WrongCat();
    wrong_cat->makeSound();
}
*/
