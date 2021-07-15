#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <AWeapon.hpp>
#include <Enemy.hpp>

class Character
{
private:
    Character();
public:
    Character(std::string& const name);
    Character(Character& const other);
    virtual ~Character();
    Character& operator=(Character& const other);

    void        recoverAP();
    void        equip(AWeapon*);
    void        attack(Enemy*);
    std::string getName() const;
};



#endif
