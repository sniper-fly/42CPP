#include "Cat.hpp"

Cat::Cat()
{
}

Cat::~Cat()
{
}

Cat::Cat(Cat const &other)
{
    *this = other;
}

Cat &Cat::operator=(Cat const &other)
{
    if (this != &other)
    {
    }
    return *this;
}
