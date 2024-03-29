#include "ZombieEvent.hpp"
#include <string>

ZombieEvent::ZombieEvent(void)
{
	srand(time(0));
	this->type = "normal";
}

ZombieEvent::~ZombieEvent(void) { }

void		ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

std::string ZombieEvent::zombie_names[TOTAL] = {
    "alice",
    "bob",
    "carol",
    "dave",
    "ellen",
    "frank",
    // nullptr
};

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie* new_zombie;

	new_zombie = new Zombie(this->type, name);
	return (new_zombie);
}

Zombie*		ZombieEvent::randomChump(void)
{
	Zombie* newbie;

	newbie = new Zombie(this->type, zombie_names[rand() % TOTAL]) ;
	newbie->announce();
	return (newbie);
}
