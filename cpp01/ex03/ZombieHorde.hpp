#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <string>

class ZombieHorde
{
	public:
		void	announce(void);
		ZombieHorde(void);
		ZombieHorde(int N, std::string name);
		~ZombieHorde(void);

	private:
		// void	setZombieType(std::string type);
		Zombie		*horde;
		int			N;
		std::string	type;

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
};

#endif
