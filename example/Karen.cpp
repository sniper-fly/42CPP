#include "Karen.hpp"

Karen::Karen()
{
    fp = &Karen::debug;
}

Karen::~Karen() { }

// void (Karen::*fp)() = &Karen::debug;

void    Karen::debug(void)
{
    std::cout << "debug" << std::endl;
}

void    Karen::complain(void)
{
    (*fp)();
}

int    main(void)
{
    Karen k;
    k.complain();
    return (0);
}
