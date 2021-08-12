#include "Subaru.hpp"
#include "iostream"

const std::string Subaru::animal = "White Whale";

Subaru::Subaru() { }

Subaru::Subaru(std::string const &name): Victim(name)
{
    std::cout << "My name is Natsuki Subaru." << std::endl;
}

Subaru::~Subaru()
{
    std::cout << "Guheeeeeee" << std::endl;
}

Subaru::Subaru(Subaru const &other)
{
    *this = other;
}

Subaru          &Subaru::operator=(Subaru const &other)
{
    if (this != &other)
    {
        name = other.name;
    }
    return *this;
}

void            Subaru::getPolymorphed() const
{
    std::cout << name << " has been turned into a " << animal << "!"
    << std::endl;
}

std::ostream&   operator<<(std::ostream &out, const Subaru& other)
{
    out << "I'm " << other.getName() << " and I like Emilia!"
    << std::endl;
    return out;
}
