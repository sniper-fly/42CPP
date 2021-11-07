#include "mutantstack.hpp"
#include <iostream>
#include <vector>
#include <list>

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

#ifdef my_test

void deep_copy_test(MutantStack<int>& mstack, MutantStack<int>& copy_mstack) {
    MutantStack<int>::iterator it  = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    for (; it != ite; ++it) {
        *it += 5;
    }
    MutantStack<int>::iterator it_mstack  = mstack.begin();
    MutantStack<int>::iterator ite_mstack = mstack.end();
    MutantStack<int>::iterator it_copy    = copy_mstack.begin();
    for (; it_mstack != ite_mstack; ++it_mstack, ++it_copy) {
        if (*it_mstack == *it_copy) {
            std::cout << "mstack: " << *it_mstack << std::endl;
            std::cout << "copy_mstack: " << *it_copy << std::endl;
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
            std::cerr << "!!!!!!!!!!!pop push failure!!!!!!!!!!!" << std::endl;
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
        if (*it != i) {
            throw std::runtime_error("iterator");
        }
    }
    std::cout << "const reverse iterator test completed" << std::endl;
}

int main() { // 自動テスト作成
    const int DATA_LEN = 10;
    // ディープコピーされているかどうか
    // = 演算子、copy constructor
    MutantStack<int> mstack;
    for (int i = 0; i < DATA_LEN; ++i) {
        mstack.push(i);
    }
    MutantStack<int> copy_mstack(mstack);
    deep_copy_test(mstack, copy_mstack);

    MutantStack<int> assign_mstack;
    assign_mstack = mstack;
    deep_copy_test(mstack, copy_mstack);

    // push popで順番通り値が取り出せるか
    pop_push_test();

    // iteratorでアクセスして順番通り値が取り出せるか
    iterator_test();
    const_reverse_iterator_test();

    // メモリリーク
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
