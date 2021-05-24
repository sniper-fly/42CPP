#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
	ZombieHorde *hoge;
	const int total_members = 10;
	
	hoge = new ZombieHorde(total_members, "wwz");
	hoge->announce();
	delete hoge;
}
