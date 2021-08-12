#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>
class Enemy
{
public:
    Enemy(int hp, std::string const& type);
    Enemy(const Enemy& other);
    virtual ~Enemy();
    Enemy& operator=(const Enemy& other);

    std::string         getType() const;
    int                 getHP() const;

    virtual void takeDamage(int);

protected:
    std::string     type;
    int             hp;
protected:
    Enemy();
};

#endif
