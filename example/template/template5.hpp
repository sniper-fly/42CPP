#ifndef TEMPLATE5_HPP
#define TEMPLATE5_HPP
#include <string>
#include <cstdlib>
#include <cstring>
#include <iostream>

template <typename TYPE>
inline TYPE max(TYPE a, TYPE b)
{
    return (a > b) ? a : b;
}

#endif
