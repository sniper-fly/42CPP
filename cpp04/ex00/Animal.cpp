#include "Animal.hpp"
#include <iostream>

Animal::Animal(): type("Animal")
{
    std::cout << "Animal was born." << std::endl;
}

Animal::~Animal()
{
    std::cout << type << " was dead." << std::endl;
}

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

void            Animal::makeSound() const
{
    std::cout << "Ahhhhhhhhhhhhhh" << std::endl;
}

std::string     Animal::getType() const
{
    return type;
}
