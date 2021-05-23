#include "Zombie.hpp"
#include "ZombieEvent.hpp"

//setZombieTypeでzombieクラスのタイプの設定, newで作って返す
//randomChump, で適当な名前のzombieを作って返す


int		main(void)
{
	const int	NUM = 5;
	Zombie		*zombies[NUM];
	ZombieEvent	first;
	ZombieEvent	second;

	first.setZombieType("wet");
	second.setZombieType("dry");

	zombies[0] = first.newZombie("foo");
	zombies[1] = second.newZombie("bar");
	for (int i = 2; i < NUM; i++) {
		zombies[i] = second.randomChump();
	}
	for (int i = 0; i < NUM; i++) {
		zombies[i]->announce();
	}
}
