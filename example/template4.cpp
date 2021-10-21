#include <iostream>

template <typename TYPE>
TYPE max(TYPE a, TYPE b)
{
    return (a > b) ? a : b;
}

template <typename TYPE1, typename TYPE2>
void printer(TYPE1 a, TYPE2 b)
{
    std::cout
    << "type1:" << a << ", "
    << "type2:" << b
    << std::endl;
}

int main()
{
    void* p;
    char str[100];
    int num;

    p = max<void*>(str, &num);
    std::cout << p << std::endl;

    printer<int, int>(1.42, 'c');

    return 0;
}
