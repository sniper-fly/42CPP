#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <deque>
#include <list>
#include <set>

template <typename T>
void test_container(T &container, const int search, const char* test_name)
{
    std::cout
    << "========"
    << test_name
    << "========"
    << std::endl;
    typename T::iterator it = easyfind(container, search);
    if (it == container.end()) {
        std::cout << search << ": does not exist" << std::endl;
    } else {
        std::cout << *it << ": found" << std::endl;
    }
    std::cout << std::endl;
}

template <typename T>
void test_const_container(const T &container, const int search, const char* test_name)
{
    std::cout
    << "========"
    << test_name
    << "========"
    << std::endl;
    typename T::const_iterator it = easyfind(container, search);
    if (it == container.end()) {
        std::cout << search << ": does not exist" << std::endl;
    } else {
        std::cout << *it << ": found" << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    const int numbers[] = {3, 13, 42, 21, 4};

    std::cout << "container test" << std::endl;
    {
        std::vector<int>    vec(numbers, numbers + 5);
        std::deque<int>     deq(numbers, numbers + 5);
        std::list<int>      lst(numbers, numbers + 5);
        std::set<int>       set(numbers, numbers + 5);
        std::multiset<int>  mset(numbers, numbers + 5);
        test_container(vec, 13, "vec");
        test_container(deq, 14, "deq");
        test_container(lst, 21, "lst");
        test_container(set, 4, "set");
        test_container(mset, 3, "mset");
    }

    std::cout << std::endl;
    std::cout << "const container test" << std::endl;
    {
        const std::vector<int>    vec(numbers, numbers + 5);
        const std::deque<int>     deq(numbers, numbers + 5);
        const std::list<int>      lst(numbers, numbers + 5);
        const std::set<int>       set(numbers, numbers + 5);
        const std::multiset<int>  mset(numbers, numbers + 5);
        test_const_container(vec, 14, "vec");
        test_const_container(deq, 13, "deq");
        test_const_container(lst, 14, "lst");
        test_const_container(set, 14, "set");
        test_const_container(mset, 14, "mset");
    }

}



/*
https://qiita.com/_EnumHack/items/a3724dead343b5aecb4e
iterator , const_iterator, const iterator

あとで読む
https://jumble-note.blogspot.com/2014/12/c-constiterator.html
*/

