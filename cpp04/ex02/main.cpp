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
    // Animal test;
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
    std::cout << "cat brain idea : " << cat.getBrainIdea(0) << std::endl;
    std::cout << "cat2 brain idea : " << cat2.getBrainIdea(0) << std::endl;
    std::cout << "cat brain idea address: " << &(cat.getBrainIdea(0)) << std::endl;
    std::cout << "cat2 brain idea address: " << &(cat2.getBrainIdea(0)) << std::endl;
    cat2 = cat;
    std::cout << "--assigned--" << std::endl;
    std::cout << "cat brain idea : " << cat.getBrainIdea(0) << std::endl;
    std::cout << "cat2 brain idea : " << cat2.getBrainIdea(0) << std::endl;
    std::cout << "cat brain idea address: " << &(cat.getBrainIdea(0)) << std::endl;
    std::cout << "cat2 brain idea address: " << &(cat2.getBrainIdea(0)) << std::endl;

    /* 冗長なのでコメントアウト
    std::cout << "----------------" << std::endl;
    Cat cat3(cat);
    std::cout << "cat brain idea : " << cat.getBrainIdea(0) << std::endl;
    std::cout << "cat3 brain idea : " << cat3.getBrainIdea(0) << std::endl;
    std::cout << "cat brain idea address: " << &(cat.getBrainIdea(0)) << std::endl;
    std::cout << "cat3 brain idea address: " << &(cat3.getBrainIdea(0)) << std::endl;
    */

    std::cout << "----------------" << std::endl;

    Dog dog;
    Dog dog2(dog);
    std::cout << "dog brain idea : " << dog.getBrainIdea(0) << std::endl;
    std::cout << "dog brain idea : " << dog2.getBrainIdea(0) << std::endl;
    std::cout << "dog brain idea address: " << &(dog.getBrainIdea(0)) << std::endl;
    std::cout << "dog brain idea address: " << &(dog2.getBrainIdea(0)) << std::endl;

    /*
    std::cout << "----------------" << std::endl;
    Dog dog3 = dog;
    std::cout << "dog brain idea : " << dog.getBrainIdea(0) << std::endl;
    std::cout << "dog3 brain idea : " << dog3.getBrainIdea(0) << std::endl;
    std::cout << "dog brain idea address: " << &(dog.getBrainIdea(0)) << std::endl;
    std::cout << "dog3 brain idea address: " << &(dog3.getBrainIdea(0)) << std::endl;
    */

    std::cout << "----------------" << std::endl;
}
// */

//dog, catはコンストラクタの時にBrain変数を持つ(new)
//コンストラクタとデストラクタで適当なアウトプット
//コピーコンストラクタはディープコピーじゃないとダメ
//mainでanimalの配列を作って半分はCat、半分はDog
// const参照にするとテンポラリオブジェクトの寿命を伸ばせる

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
