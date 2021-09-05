#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include <string>

class Cure : public AMateria
{
private:

public:
    Cure();
    virtual ~Cure();
    Cure(Cure const &other);
    Cure(std::string const &type);
    Cure &operator=(Cure const &other);

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};

#endif
