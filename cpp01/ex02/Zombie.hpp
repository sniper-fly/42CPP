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
		Zombie(void); //コンストラクタがある状態とない状態でコンパイルしたら？
		Zombie(std::string type, std::string name);
		~Zombie(void);
};

#endif
