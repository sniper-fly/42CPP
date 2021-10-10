#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void);

// void identify(Base* p);
// {

// }

// void identify(Base& p);
// {

// }

int main()
{
    Base* hoge = generate();
    delete hoge;
}
