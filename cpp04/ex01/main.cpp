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
    Animal* animals[10];

    int i;
    for (i = 0; i < 5; ++i) {
        animals[i] = new Dog();
    }
    std::cout << "----------------" << std::endl;
    for (; i < 10; ++i) {
        animals[i] = new Cat();
    }
    std::cout << "----------------" << std::endl;
    for (i = 0; i < 10; ++i) {
        animals[i]->makeSound();
    }
    std::cout << "----------------" << std::endl;
    for (i = 0; i < 10; ++i) {
        delete animals[i];
    }

    std::cout << "----------------" << std::endl;

    Cat cat;
    Cat cat2;
    cat2 = cat;
    std::cout << "cat brain ideas : " << cat.getBrainIdea(0) << std::endl;
    std::cout << "cat2 brain ideas : " << cat2.getBrainIdea(0) << std::endl;
    // std::cout << "cat brain ideas address: " << &(cat.getBrainIdea(0)) << std::endl;
    // std::cout << "cat2 brain ideas address: " << &(cat2.getBrainIdea(0)) << std::endl;

    Dog dog;
    // Dog dog2(dog);
    std::cout << "dog brain ideas : " << dog.getBrainIdea(0) << std::endl;
    // std::cout << "dog brain ideas : " << dog2.getBrainIdea(0) << std::endl;
    // std::cout << "dog brain ideas address: " << &(dog.getBrainIdea(0)) << std::endl;
    // std::cout << "dog brain ideas address: " << &(dog2.getBrainIdea(0)) << std::endl;
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
