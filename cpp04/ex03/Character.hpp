#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include <string>
# include "AMateria.hpp"

class Character : public ICharacter
{
private:
    std::string     name;
    AMateria*       materias[4];

public:
    Character();
    virtual ~Character();
    Character(Character const &other);
    Character &operator=(Character const &other);

    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif
