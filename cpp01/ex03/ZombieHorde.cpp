#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->N; i++) {
		this->horde[i].announce();
	}
}

ZombieHorde::ZombieHorde(int N, std::string type)
{
	this->N = N;
	this->horde = new Zombie[N];
	srand(time(0));
	for (int i = 0; i < N; i++) {
		this->horde[i].setType(type);
		this->horde[i].setName(zombie_names[rand() % TOTAL]);
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] this->horde;
}

std::string ZombieHorde::zombie_names[TOTAL] = {
    "alice",
    "bob",
    "carol",
    "dave",
    "ellen",
    "frank",
    // nullptr
}
