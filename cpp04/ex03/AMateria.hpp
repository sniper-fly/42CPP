#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include <string>

class ICharacter;

class AMateria
{
protected:
    std::string type;
public:
    AMateria();
    virtual ~AMateria();
    AMateria(AMateria const &other);
    AMateria &operator=(AMateria const &other);
    AMateria(std::string const & type);

    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif
