#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

//setZombieTypeでzombieクラスのタイプの設定, newで作って返す
//randomChump, で適当な名前のzombieを作って返す

int		main(void)
{
	const int	NUM = 4;
	Zombie		*heap_zombies[NUM];
	Zombie		stack_zombie("wet", "stackman");
	ZombieEvent	wwz;

	stack_zombie.announce();

	std::cout << "------------------------------" << std::endl;

	wwz.setZombieType("dry");
	for (int i = 0; i < NUM; i++) {
		heap_zombies[i] = wwz.randomChump();
	}
	for (int i = 0; i < NUM; i++) {
		delete heap_zombies[i];
	}
	std::cout << "------------------------------" << std::endl;
}
