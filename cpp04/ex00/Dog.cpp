#include "Dog.hpp"

Dog::Dog()
{
}

Dog::~Dog()
{
}

Dog::Dog(Dog const &other)
{
    *this = other;
}

Dog &Dog::operator=(Dog const &other)
{
    if (this != &other)
    {
    }
    return *this;
}
