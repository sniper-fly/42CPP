#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <ctime>
#include <cstdlib>

// /*
int main()
{
    srand(time(0));
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << (long)i << std::endl;
    std::cout << (long)j << std::endl;

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

//親クラスのprotected typeと子クラスのprotected typeは同じなのか？
//同じ。
//operator=は親クラスで定義したものが使われる あくまで、どの型がマッチするかが判定される
