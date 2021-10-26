#include "easyfind.hpp"
#include <vector>
#include <iostream>

template <typename iter, typename container>
void test_if_num_exist(const container& c, const iter& it, int search)
{
    if (it == c.end()) {
        std::cout << search << ": does not exist" << std::endl;
    } else {
        std::cout << *it << ": found" << std::endl;
    }
}

int main()
{
    const int numbers[] = {3, 13, 42, 21, 4};

    std::vector<int> v(numbers, numbers + 5);
    {
        const int search = 4;
        std::vector<int>::iterator it = easyfind(v, search);
        test_if_num_exist(v, it, search);
    }
    {
        const int search = 1;
        std::vector<int>::iterator it = easyfind(v, search);
        test_if_num_exist(v, it, search);
    }
    {
        const int search = 13;
        const std::vector<int>::iterator it = easyfind(v, search);
        test_if_num_exist(v, it, search);
    }

    const std::vector<int> v_const(numbers, numbers + 5);
    {
        const int search = 13;
        std::vector<int>::const_iterator it = easyfind(v_const, search);
        test_if_num_exist(v_const, it, search);
    }
    {
        const int search = 16;
        const std::vector<int>::const_iterator it = easyfind(v_const, search);
        test_if_num_exist(v_const, it, search);
    }

}

/*
https://qiita.com/_EnumHack/items/a3724dead343b5aecb4e
iterator , const_iterator, const iterator

あとで読む
https://jumble-note.blogspot.com/2014/12/c-constiterator.html
*/

