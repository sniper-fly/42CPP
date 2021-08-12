#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
    type = "WrongCat";
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
        type = other.type;
    }
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Meow" << std::endl;
}
