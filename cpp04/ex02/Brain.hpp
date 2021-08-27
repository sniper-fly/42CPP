#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class Brain
{
public:
    Brain();
    virtual ~Brain();
    Brain(Brain const &other);
    Brain &operator=(Brain const &other);

    std::string const &get_idea(int) const;
private:
    static const int            IDEA_CT = 100;
    static const int            EX_CT = 50;
    static const std::string    examples[EX_CT];

    std::string                 ideas[IDEA_CT];
};

#endif
