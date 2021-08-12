#include "Cat.hpp"
#include <iostream>

Cat::Cat() { type = "Cat"; }

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
        type = other.type;
    }
    return *this;
}

void Cat::makeSound()
{
    std::cout << "Meowwwww" << std::endl;
}
