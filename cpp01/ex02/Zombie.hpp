#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{
	private:
		std::string		type;
		std::string		name;
	public:
		void	announce(void);
};

#endif
