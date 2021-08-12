#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer() { }

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

void        Sorcerer::polymorph(const Victim &victim) const
{
    victim.getPolymorphed();
}

std::string Sorcerer::getName() const { return name; }
std::string Sorcerer::getTitle() const { return title; }

std::ostream& operator<<(std::ostream &out, const Sorcerer& other)
{
    out << "I am " << other.getName() << ", "
    << other.getTitle() << ", and I like ponies!"
    << std::endl;
    return out;
}
