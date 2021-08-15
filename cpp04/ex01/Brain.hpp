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
    std::string  ideas[100];
};

#endif
