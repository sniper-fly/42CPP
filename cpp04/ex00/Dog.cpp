#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    std::cout << "Dog was born." << std::endl;
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << type << " was dead." << std::endl;
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
