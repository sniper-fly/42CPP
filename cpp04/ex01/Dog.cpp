#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    type = "Dog";
    brain = new Brain;
    std::cout << "New dog was born." << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog was dead.." << std::endl;
}

Dog::Dog(Dog const &other):Dog() { *this = other; }

Dog &Dog::operator=(Dog const &other)
{
    if (this != &other)
    {
        type = other.type;
        delete brain;
        brain = new Brain(*(other.brain));
    }
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "Wan Wan" << std::endl;
}

std::string const     &Dog::getBrainIdea(int i) const
{
    return brain->get_idea(i);
}
