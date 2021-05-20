#include <iostream>
#include "Phonebook.hpp"
#include "colors.hpp"

static const int TOTAL_CONTACTS = 8;

void	receive_contact(std::string contact_str, std::string &input)
{
	std::cout << "Please enter your " << contact_str << "." << std::endl;
	std::cout << contact_str << "> ";
	getline(std::cin, input, '\n');
	if (std::cin.eof())
		exit(1);
}

void	add_phonebook(Phonebook contacts)
{
	std::string		input;

	for (int i = 0; i < TOTAL_DATA; i++) {
		receive_contact(contact_str[i], input);
		contacts.setStrData(i, input);
	}
	while (true) {
		receive_contact("email address", input);
		if (contacts.setEmailAddress(input))
			break ;
		std::cout << RED << "Entered email address seems to be wrong. Plz confirm."
		<< RESET << std::endl;
	}
	while (true) {
		receive_contact("phone number", input);
		if (contacts.setPhoneNumber(input))
			break ;
		std::cout << RED << "Entered phone number seems to be wrong. Plz confirm."
		<< RESET << std::endl;
	}
	std::cout << GREEN << "-----Your phonebook has registered.-----"
			  << RESET << std::endl;
}

void	wait_user_command(void)
{
	std::string cmd;
	Phonebook contacts[TOTAL_CONTACTS];
	int idx = 0;

	while (true) {
		std::cout << "> ";
		// std::cin >> cmd;
		getline(std::cin, cmd, '\n');
		if (cmd == "exit" || cmd == "EXIT" || std::cin.eof()) {
			break;
		}
		else if (cmd == "add" || cmd == "ADD") {
			if (idx > 8) {
				std::cout << RED << "Phonebook is full." << RESET << std::endl;
				continue ;
			}
			add_phonebook(contacts[idx]);
			idx++;
		}
		// else if (cmd == "search" || cmd == "SEARCH")
		// 	search_phonebook();
		// std::cout << cmd << std::endl; //for debug
	}
}

int	main(void)
{
	wait_user_command();
}
