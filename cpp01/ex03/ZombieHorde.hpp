#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <string>

class ZombieHorde
{
	public:
		void	announce(void);
		ZombieHorde(int N, std::string type);
		~ZombieHorde(void);

	private:
		// void	setZombieType(std::string type);
		Zombie		*horde;
		int			N;

		enum : int {
			alice,
			bob,
			carol,
			dave,
			ellen,
			frank,
			TOTAL
		};
		static std::string zombie_names[TOTAL];
};

#endif
