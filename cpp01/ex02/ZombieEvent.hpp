#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
	public:
		void		setZombieType();
		Zombie*		newZombie(std::string name);
		void		randomChump();
};

#endif
