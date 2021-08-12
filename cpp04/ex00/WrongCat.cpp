#include "WrongCat.hpp"

WrongCat::WrongCat()
{
}

WrongCat::~WrongCat()
{
}

WrongCat::WrongCat(WrongCat const &other)
{
    *this = other;
}

WrongCat &WrongCat::operator=(WrongCat const &other)
{
    if (this != &other)
    {
    }
    return *this;
}
