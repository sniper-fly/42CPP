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
    std::stack<int, std::vector<int> > s(mstack);
    return 0;
}
#endif

// #define my_test /////////////// TODO remove this line
#ifdef my_test

int main() { // 自動テスト作成
    // ディープコピーされているかどうか
    MutantStack<int> mstack;
    for (int i = 0; i < 10; ++i) {
        mstack.push(i);
    }
    MutantStack<int>           copy_mstack(mstack);
    MutantStack<int>::iterator it  = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    for (; it != ite; ++it) {
    }
    // = 演算子、copy constructor
    // push popで順番通り値が取り出せるか
    // iteratorでアクセスして順番通り値が取り出せるか
    // メモリリーク
}

#endif
