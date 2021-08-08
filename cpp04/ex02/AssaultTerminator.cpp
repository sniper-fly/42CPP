#include "AssaultTerminator.hpp"
#include "iostream"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &other):
    AssaultTerminator()
{
    (void)other;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &other)
{
    (void)other;
    return *this;
}

ISpaceMarine*   AssaultTerminator::clone() const
{
    ISpaceMarine* new_one = new AssaultTerminator(*this);
    return new_one;
}

void            AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void            AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void            AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}
