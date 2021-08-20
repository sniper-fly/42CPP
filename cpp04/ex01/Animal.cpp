#include "Animal.hpp"
#include <iostream>

Animal::Animal(): type("Animal")
{
}

Animal::~Animal() { }

Animal::Animal(Animal const &other)
{
    *this = other;
}

Animal &Animal::operator=(Animal const &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

void                Animal::makeSound() const
{
    std::cout << "Ahhhhhhhhhhhhhh" << std::endl;
}

std::string const   &Animal::getType() const
{
    return type;
}
