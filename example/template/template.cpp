#include <iostream>

template <typename TYPE, typename TYPE2>
void display(TYPE a, TYPE2 b)
{
    std::cout << "1: " << a << std::endl
              << "2: " << b << std::endl;
}

int main(void)
{
    display('c', 2);
}
