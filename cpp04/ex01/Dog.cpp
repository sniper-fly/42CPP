#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    type = "Dog";
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
        type = other.type;
    }
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "Wan Wan" << std::endl;
}
