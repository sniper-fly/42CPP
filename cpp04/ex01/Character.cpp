#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const & name):
    name(name),
    action_point(40),
    weapon(NULL)
{
}

Character::Character(Character& other)
{
    *this = other;
}

Character::~Character() { }

Character&      Character::operator=(Character& other)
{
    name = other.name;
    action_point = other.action_point;
    weapon = other.weapon;
    return *this;
}

void            Character::recoverAP()
{
    action_point += 10;
    if (action_point > 40) {
        action_point = 40;
    }
}

void            Character::equip(AWeapon* wep)
{
    weapon = wep;
}

void            Character::attack(Enemy* en)
{
    if (weapon == NULL) {
        std::cout << name << " does not have any weapon..." << std::endl;
        return ;
    } else if (action_point - weapon->getAPCost() < 0) {
        std::cout << name << " does not have enough AP..." << std::endl;
        return ;
    }
    action_point -= weapon->getAPCost();
    std::cout << name << " attacks " << en->getType() << " with a "
    << weapon->getName() << std::endl;
    en->takeDamage(weapon->getDamage());
}

std::string     Character::getName() const { return name; }
int             Character::getAP() const { return action_point; }
AWeapon*        Character::getWeapon() const { return weapon; }

std::ostream &operator<<(std::ostream &out, Character const & other)
{
    if (other.getWeapon() == NULL) {
        out << other.getName() << " has " << other.getAP()
        << " AP and is unarmed" << std::endl;
    } else {
        out << other.getName() << " has " << other.getAP() << " AP and wields a "
        << other.getWeapon()->getName() << std::endl;
    }
    return out;
}
