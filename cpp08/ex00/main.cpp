#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
    const int numbers[] = {3, 13, 42, 21, 4};
    std::vector<int> v(numbers, numbers + 5);
    std::vector<int>::iterator it = easyfind(v, 5);
    if (it == v.end()) {
        std::cout << "end" << std::endl;
    }
    std::cout << *v.begin() << std::endl;
    std::cout << *easyfind(v, 1) << std::endl;
    
}

/*
https://qiita.com/_EnumHack/items/a3724dead343b5aecb4e
iterator , const_iterator, const iterator

あとで読む
https://jumble-note.blogspot.com/2014/12/c-constiterator.html
*/

