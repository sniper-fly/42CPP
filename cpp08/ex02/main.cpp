#include "mutantstack.hpp"
#include <iostream>
#include <vector>

#ifndef my_test
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

#define my_test /////////////// TODO remove this line
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

void compare_2value_with_try_catch(
    void (*test_func)(MutantStack<int>&, MutantStack<int>&),
    MutantStack<int>& mstack1, MutantStack<int>& mstack2) {
    try {
        (*test_func)(mstack1, mstack2);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
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
    compare_2value_with_try_catch(deep_copy_test, mstack, copy_mstack);
    MutantStack<int> assign_mstack;
    assign_mstack = mstack;
    compare_2value_with_try_catch(deep_copy_test, mstack, assign_mstack);

    // push popで順番通り値が取り出せるか
    // iteratorでアクセスして順番通り値が取り出せるか
    // メモリリーク
}

#endif
