#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &other): TacticalMarine()
{
    (void)other;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &other)
{
    (void)other;
    return *this;
}

ISpaceMarine*   TacticalMarine::clone() const
{
    ISpaceMarine* new_one = new TacticalMarine(*this);
    return new_one;
}

void            TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!" << std::endl;
}

void            TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void            TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}
