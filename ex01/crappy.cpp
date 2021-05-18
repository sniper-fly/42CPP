#include <iostream>

void	wait_user_command(void)
{
	std::string		cmd;

	while (true)
	{
		std::cout << "> ";
		// std::cin >> cmd;
		getline(std::cin, cmd, '\n');
		if (cmd == "exit" || cmd == "EXIT" || std::cin.eof())
			break;
		// else if (cmd == "add" || cmd == "ADD")
		// 	add_phonebook();
		// else if (cmd == "search" || cmd == "SEARCH")
		// 	search_phonebook();
		std::cout << cmd << std::endl; //for debug
	}
}

int	main(void)
{
	wait_user_command();
}
