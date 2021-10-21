#ifndef TEMPLATE3_HPP
#define TEMPLATE3_HPP
#include <iostream>

template <typename TYPE>
void Disp(TYPE value)
{
    std::cout << value << std::endl;
}

// 実体化
// template void Disp(int);

#endif
