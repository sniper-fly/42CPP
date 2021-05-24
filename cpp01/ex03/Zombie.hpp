#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{
	private:
		std::string		name;
		std::string		type;
	public:
		void	announce(void);
		void	setType(std::string type);
		void	setName(std::string name);

		Zombie(void);
		Zombie(std::string type, std::string name);
		~Zombie(void);
};

#endif
