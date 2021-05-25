#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	public:
		void	setWeapon(Weapon buki);
		void	attack(void);
		HumanB(std::string name);
	private:
		Weapon	buki;
};

#endif
