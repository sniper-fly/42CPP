#include "mutantstack.hpp"
#include <iostream>
#include <vector>
#include <list>

#define END   "\033[0m"
#define RED   "\033[31m"
#define GREEN "\033[32m"

#if ! defined(my_test) && ! defined(cmp_with_list)

int main() {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it  = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}

#endif

#ifdef cmp_with_list

int main() {
    std::list<int> lst;

    lst.push_back(5);
    lst.push_back(17);

    std::cout << lst.back() << std::endl;

    lst.pop_back();

    std::cout << lst.size() << std::endl;

    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    //[...]
    lst.push_back(0);

    std::list<int>::iterator it  = lst.begin();
    std::list<int>::iterator ite = lst.end();

    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    return 0;
}

#endif

// #define my_test
#ifdef my_test

void deep_copy_test(MutantStack<int>& mstack, MutantStack<int>& copy_mstack);
void pop_push_test();
void iterator_test();
void const_reverse_iterator_test();

int main() { // 自動テスト作成
    // ディープコピーされているかどうか
    // = 演算子、copy constructor
    std::cout << GREEN << "--------deep copy test--------" << END << std::endl;
    const int        DATA_LEN = 10;
    MutantStack<int> mstack;
    for (int i = 0; i < DATA_LEN; ++i) {
        mstack.push(i);
    }
    MutantStack<int> copy_mstack(mstack);
    deep_copy_test(mstack, copy_mstack);
    std::cout << "----------------------" << std::endl;
    MutantStack<int> assign_mstack;
    assign_mstack = mstack;
    deep_copy_test(mstack, assign_mstack);

    // push popで順番通り値が取り出せるか
    std::cout << GREEN << "--------pop push test--------" << END << std::endl;
    pop_push_test();

    // iteratorでアクセスして順番通り値が取り出せるか
    std::cout << GREEN << "--------iterator test--------" << END << std::endl;
    iterator_test();

    std::cout << GREEN << "---const reverse iterator---" << END << std::endl;
    const_reverse_iterator_test();

    // メモリリーク
}

void deep_copy_test(MutantStack<int>& mstack, MutantStack<int>& copy_mstack) {
    MutantStack<int>::iterator it  = copy_mstack.begin();
    MutantStack<int>::iterator ite = copy_mstack.end();
    for (; it != ite; ++it) {
        *it += 5;
    }
    MutantStack<int>::iterator it_mstack  = mstack.begin();
    MutantStack<int>::iterator ite_mstack = mstack.end();
    MutantStack<int>::iterator it_copy    = copy_mstack.begin();
    for (; it_mstack != ite_mstack; ++it_mstack, ++it_copy) {
        std::cout << "mstack: " << *it_mstack << ", ";
        std::cout << "copy_mstack: " << *it_copy << std::endl;
        if (*it_mstack == *it_copy) {
            throw std::runtime_error("deep copy failed");
        }
    }
}

void pop_push_test() {
    const int   len           = 4;
    const float test_val[len] = {
        3.89, //
        5.34, //
        2.1,  //
        3.45, //
    };
    MutantStack<float> mstack;
    for (int i = 0; i < len; ++i) {
        mstack.push(test_val[i]);
    }
    for (int i = 0; i < len; ++i) {
        float top = mstack.top();
        std::cout << "top: " << top << std::endl;
        if (top != test_val[len - i - 1]) {
            throw std::runtime_error("pop push failure");
        }
        mstack.pop();
    }
}

void iterator_test() {
    const int        DATA_LEN = 10;
    MutantStack<int> mstack;
    for (int i = 0; i < DATA_LEN; ++i) {
        mstack.push(i);
    }
    MutantStack<int>::iterator it  = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    for (int i = 0; it != ite; ++i, ++it) {
        std::cout << "it: " << *it << ", ";
        std::cout << "i: " << i << std::endl;
        if (*it != i) {
            throw std::runtime_error("iterator");
        }
    }
    std::cout << "iterator test completed" << std::endl;
}

void const_reverse_iterator_test() {
    const int        DATA_LEN = 10;
    MutantStack<int> base_mstack;
    for (int i = 0; i < DATA_LEN; ++i) {
        base_mstack.push(i);
    }
    const MutantStack<int>                   mstack(base_mstack);
    MutantStack<int>::const_reverse_iterator it  = mstack.rbegin();
    MutantStack<int>::const_reverse_iterator ite = mstack.rend();
    for (int i = DATA_LEN - 1; it != ite; --i, ++it) {
        std::cout << "it: " << *it << ", ";
        std::cout << "i: " << i << std::endl;
        if (*it != i) {
            throw std::runtime_error("iterator");
        }
    }
    std::cout << "const reverse iterator test completed" << std::endl;
}

#endif
