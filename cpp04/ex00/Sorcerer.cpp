#include "Sorcerer.hpp"
#include <iostream>

// Sorcerer::Sorcerer() { }

Sorcerer::Sorcerer(const std::string& name, const std::string& title):
    name(name),
    title(title)
{
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& other)
{
    copy(other);
}

Sorcerer::~Sorcerer()
{
    std::cout << name << ", " << title
    << ", is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::copy(const Sorcerer& other)
{
    this->name = other.name;
    this->title = other.title;
}

Sorcerer& Sorcerer::operator=(const Sorcerer& other)
{
    copy(other);
    return (*this);
}
