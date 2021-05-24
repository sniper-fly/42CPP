#include "ZombieHorde.hpp"

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->N; i++) {
		this->horde->announce();
	}
}

ZombieHorde::ZombieHorde(int N, std::string type)
{
	this->N = N;
	this->type = type;
	this->horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		this->horde[i]
	}
}

ZombieHorde::~ZombieHorde(void)
{

}
