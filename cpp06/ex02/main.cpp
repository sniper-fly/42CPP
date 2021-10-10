#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base * generate(void);

void identify(Base* p)
{
    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    }
    else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    }
    else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    }
}

// void identify(Base& p)
// {

// }

int main()
{
    Base* instances[10];
    for (int i = 0; i < 10; ++i) {
        instances[i] = generate();
        identify(instances[i]);
        delete instances[i];
    }
}
