#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include "ICharacter.hpp"

class AMateria
{
protected:
    std::string     type;
    unsigned int    xp;

public:
    AMateria();
    virtual ~AMateria();
    AMateria(AMateria const &other);
    AMateria &operator=(AMateria const &other);
    AMateria(std::string const & type);

    std::string const & getType() const;
    unsigned int        getXP() const;

    virtual AMateria*   clone() const = 0;
    virtual void        use(ICharacter& target);
};

#endif
