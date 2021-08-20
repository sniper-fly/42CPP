#include "Brain.hpp"

Brain::Brain()
{
    std::string idea = examples[rand() % EX_CT];
    for (int i = 0; i < IDEA_CT; ++i) {
        ideas[i] = idea;
    }
}

Brain::~Brain() { }

Brain::Brain(Brain const &other)
{
    *this = other;
}

Brain &Brain::operator=(Brain const &other)
{
    if (this != &other)
    {
        for (int i = 0; i < IDEA_CT; ++i) {
            ideas[i] = other.get_idea(i); //ここでは参照ではなく値のコピーが行われる
        }
    }
    return *this;
}

std::string const &Brain::get_idea(int i) const
{
    return ideas[i];
}

const std::string    Brain::examples[EX_CT] = {
    "mountain",
    "have",
    "passive",
    "dealer",
    "senior",
    "round",
    "note",
    "immune",
    "wolf",
    "coerce",
    "fill",
    "prestige",
    "understand",
    "snow",
    "treatment",
    "plead",
    "nest",
    "architecture",
    "mark",
    "revive",
    "appeal",
    "budget",
    "flight",
    "secular",
    "fool",
    "raise",
    "credit",
    "prisoner",
    "divorce",
    "wheat",
    "dare",
    "terrace",
    "plug",
    "convulsion",
    "support",
    "offer",
    "pupil",
    "referee",
    "enter",
    "marketing",
    "player",
    "kid",
    "advance",
    "drink",
    "summary",
    "protect",
    "thesis",
    "quaint",
    "original",
    "health"
};
