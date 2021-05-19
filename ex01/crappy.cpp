#include <iostream>
#include "Phonebook.hpp"

static const int TOTAL_CONTACTS = 8;

void	add_phonebook(Phonebook contacts[TOTAL_CONTACTS])
{
	std::string		input;

	for (int info = 0; info < TOTAL_DATA; info++)
	{
		std::cout << "Please enter your " << contact_str[info] << "." << std::endl;
		std::cout << contact_str[info] << "> ";
		getline(std::cin, input, '\n');
		if (std::cin.eof())
			exit(1);
		contacts->setStrData(info, input);
	}
	std::cout << "Your phonebook has registered." << std::endl;
}

void	wait_user_command(void)
{
	std::string cmd;
	Phonebook contacts[TOTAL_CONTACTS];

	while (true)
	{
		std::cout << "> ";
		// std::cin >> cmd;
		getline(std::cin, cmd, '\n');
		if (cmd == "exit" || cmd == "EXIT" || std::cin.eof())
			break;
		else if (cmd == "add" || cmd == "ADD")
			add_phonebook(contacts);
		// else if (cmd == "search" || cmd == "SEARCH")
		// 	search_phonebook();
		// std::cout << cmd << std::endl; //for debug
	}
}

int	main(void)
{
	wait_user_command();
}
