#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
    type = "Wrong Animal";
}

WrongAnimal::~WrongAnimal()
{
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

std::string WrongAnimal::getType() const { return type; }

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong animal" << std::endl;
}
