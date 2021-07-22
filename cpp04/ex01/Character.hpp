#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

//TODO: attackに関しては武器が無いとテストできない
class Character
{
private:
    Character();
public:
    Character(std::string const & name);
    Character(Character& other);
    virtual ~Character();
    Character& operator=(Character& other);

    void        recoverAP();
    void        equip(AWeapon*);
    void        attack(Enemy*);
    std::string getName() const;
    int         getAP() const;
    AWeapon*    getWeapon() const;

private:
    std::string     name;
    int             action_point;
    AWeapon*        weapon;
};

std::ostream &operator<<(std::ostream &out, Character const & other);

#endif
