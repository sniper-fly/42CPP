#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>
# include <fstream>

class Replace
{
public:
	static void ft_sed(std::string file_name, std::string replaced, std::string dest);
private:
	static std::string replace_str(std::string buf, std::string replaced, std::string dest);
};

#endif
