#include "Brain.hpp"

Brain::Brain() { }

Brain::~Brain() { }

Brain::Brain(Brain const &other)
{
    *this = other;
}

Brain &Brain::operator=(Brain const &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; ++i) {
            ideas[i] = other.get_idea(i); //ここでは参照ではなく値のコピーが行われる
        }
    }
    return *this;
}

std::string const &Brain::get_idea(int i) const
{
    return ideas[i];
}
