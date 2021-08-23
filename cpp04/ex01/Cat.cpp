#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    type = "Cat";
    brain = new Brain;
    std::cout << "New cat was born." << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat was dead.." << std::endl;
}

Cat::Cat(Cat const &other):Cat() { *this = other; }

Cat &Cat::operator=(Cat const &other)
{
    if (this != &other)
    {
        type = other.type;
        delete brain;
        brain = new Brain(*(other.brain));
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meowwwww" << std::endl;
}

std::string     Cat::getBrainIdea(int i) const
{
    return brain->get_idea(i);
}
