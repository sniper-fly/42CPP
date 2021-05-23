#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
	private:
		enum : int {
			alice,
			bob,
			carol,
			dave,
			ellen,
			frank,
			TOTAL
		};
		const std::string zombie_names[TOTAL] = {
			"alice",
			"bob",
			"carol",
			"dave",
			"ellen",
			"frank",
			// nullptr
		};

		std::string		type;

	public:
		ZombieEvent(void);
		~ZombieEvent(void);

		void		setZombieType(std::string type);
		Zombie*		newZombie(std::string name);
		Zombie*		randomChump(void);
};

#endif
