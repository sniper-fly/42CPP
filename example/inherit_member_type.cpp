#include <iostream>

class parent
{
public:
    typedef int hoge;
};

class child : public parent
{
public:
    // parent::hoge var = 1;
    hoge var = 1;
};

int main() {
    child ch;
    std::cout << ch.var << std::endl;
}
