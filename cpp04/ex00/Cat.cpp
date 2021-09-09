#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    std::cout << "Cat was born." << std::endl;
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << type << " was dead." << std::endl;
}

Cat::Cat(Cat const &other)
{
    *this = other;
}

Cat &Cat::operator=(Cat const &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meowwwww" << std::endl;
}
