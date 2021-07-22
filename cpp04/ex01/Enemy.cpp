#include "Enemy.hpp"
#include <string>

Enemy::Enemy(int hp, std::string const& type):
    type(type),
    hp(hp)
{
}

Enemy::Enemy(const Enemy& other)
{
    *this = other;
}

Enemy::~Enemy() {}

Enemy& Enemy::operator=(const Enemy& other)
{
    this->type = other.getType();
    this->hp = other.getHP();
    return *this;
}

std::string        Enemy::getType() const { return type; }
int                 Enemy::getHP() const { return hp; }

void                Enemy::takeDamage(int damage)
{
    hp -= damage;
    if (hp < 0) {
        hp = 0;
    }
}
