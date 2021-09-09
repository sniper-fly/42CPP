#include <string>
#include <iostream>

int main(void)
{
    std::string hoge = "aaaa";
    std::cout << &hoge << std::endl;
    std::string piyo;
    piyo = hoge;
    std::cout << &piyo << std::endl;
}
