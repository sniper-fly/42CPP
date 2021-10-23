#include "iter.hpp"
#include <iostream>
#include <cstdlib>
#include <cstring>
#define LENGTH 8
#define NOT !

template <typename T>
void print(T something)
{
    std::cout << something << std::endl;
}

void add_one(int &num)
{
    ++num;
}

void add_one(double &num)
{
    ++num;
}

void add_hoge(std::string &str)
{
    str += "hoge";
}

void int_test()
{
    int tested[LENGTH] = {
        31,
        41,
        3,
        45,
        13,
        79,
        834,
        2
    };
    const int tester[LENGTH] = {
        32,
        42,
        4,
        46,
        14,
        80,
        835,
        3
    };
    iter(tested, LENGTH, add_one);
    iter(tested, LENGTH, print);
    const bool has_different_elem = memcmp(tested, tester, LENGTH);
    if (has_different_elem) {
        std::cout << "int test: something wrong" << std::endl;
        exit(1);
    }
}

void double_test()
{
    double tested[LENGTH] = {
        31.3,
        41.1,
        3.4,
        45.9,
        13.8,
        79.7,
        834.4,
        2.6
    };
    const double tester[LENGTH] = {
        32.3,
        42.1,
        4.4,
        46.9,
        14.8,
        80.7,
        835.4,
        3.6
    };
    iter(tested, LENGTH, add_one);
    iter(tested, LENGTH, print);
    const bool has_different_elem = memcmp(tested, tester, LENGTH);
    if (has_different_elem) {
        std::cout << "double test: something wrong" << std::endl;
        exit(1);
    }
}

void string_test()
{
    std::string tested[LENGTH] = {
        "apple",
        "banana",
        "coin",
        "damage",
        "egg",
        "flower",
        "geek",
        "hack",
    };
    const std::string tester[LENGTH] = {
        "applehoge",
        "bananahoge",
        "coinhoge",
        "damagehoge",
        "egghoge",
        "flowerhoge",
        "geekhoge",
        "hackhoge",
    };
    iter(tested, LENGTH, add_hoge);
    iter(tested, LENGTH, print);
    for (int i = 0; i < LENGTH; ++i) {
        if (tested[i] != tester[i]) {
            std::cout << "string test: something wrong" << std::endl;
            exit(1);
        }
    }
}

int main()
{
    // int型配列各要素に1を足す
    int_test();
    std::cout << "=======================" << std::endl;
    // doubleで同様
    double_test();
    std::cout << "=======================" << std::endl;
    // stringで各要素の末尾にhogeを足して出力
    string_test();
}
