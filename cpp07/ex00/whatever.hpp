#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename TYPE>
void swap(TYPE &a, TYPE &b)
{
    TYPE tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <typename TYPE>
TYPE &min(TYPE &a, TYPE &b)
{
    return (a >= b) ? b : a;
}

template <typename TYPE>
TYPE &max(TYPE &a, TYPE &b)
{
    return (a <= b) ? b : a;
}

#endif
