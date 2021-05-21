#include <iostream>
#include "Phonebook.hpp"
#include "colors.hpp"

static const int TOTAL_CONTACTS = 8;

void	receive_contact(std::string contact_str, std::string &input)
{
	std::cout << "Please enter your " << contact_str << "." << std::endl;
	while (true) {
		std::cout << contact_str << "> ";
		getline(std::cin, input, '\n');
		if (std::cin.eof())
			exit(1);
		if (input.empty()){
			std::cout << RED << "Plz put it something." << RESET << std::endl;
			continue ;
		}
		break;
	}
}

void	add_phonebook(Phonebook contacts)
{
	std::string		input;

	contacts.setIsEmpty(false);
	for (int i = 0; i < TOTAL_DATA; i++) {
		receive_contact(contact_str[i], input);
		contacts.setStrData(i, input);
	}
	while (true) {
		receive_contact("phone number", input);
		if (contacts.setPhoneNumber(input))
			break ;
		std::cout << RED << "Entered phone number seems to be wrong. Plz confirm."
		<< RESET << std::endl;
	}
	while (true) {
		receive_contact("birthday year", input);
		if (contacts.setBirthdayYear(input))
			break ;
		std::cout << RED << "Entered birthday year seems to be wrong. Plz confirm."
		<< RESET << std::endl;
	}
	while (true) {
		receive_contact("birthday month", input);
		if (contacts.setBirthdayMonth(input))
			break ;
		std::cout << RED << "Entered birthday month seems to be wrong. Plz confirm."
		<< RESET << std::endl;
	}
	while (true) {
		receive_contact("birthday date", input);
		if (contacts.setBirthdayDate(input))
			break ;
		std::cout << RED << "Entered birthday date seems to be wrong. Plz confirm."
		<< RESET << std::endl;
	}
	std::cout << GREEN << "-----Your phonebook has registered.-----"
			  << RESET << std::endl;
}

void	search_phonebook(Phonebook contacts[TOTAL_CONTACTS])
{
	std::string order_str;
	int order;

	std::cout << "Plz put the index you want to know in detail." << std::endl;
	while (true) {
		std::cout << "index";
		getline(std::cin, order_str, '\n');
		try {
			order = std::stoi(order_str);
		}
		catch (const std::invalid_argument& e) {
			std::cout << e.what() << "plz put it again." << std::endl;
		}
		if (order > TOTAL_CONTACTS || contacts[order - 1].isEmpty()) {
			std::cout << "Phonebook does not have index on" << order << std::endl;
			continue ;
		}
		// TODO: Show all member on the specified index (order)
	}
}

void	wait_user_command(void)
{
	std::string cmd;
	Phonebook contacts[TOTAL_CONTACTS];
	int idx = 0;

	while (true) {
		std::cout << "> ";
		getline(std::cin, cmd, '\n');
		if (cmd == "exit" || cmd == "EXIT" || std::cin.eof()) {
			break;
		}
		else if (cmd == "add" || cmd == "ADD") {
			if (idx > TOTAL_CONTACTS - 1) {
				std::cout << RED << "Phonebook is full." << RESET << std::endl;
				continue ;
			}
			add_phonebook(contacts[idx]);
			idx++;
		}
		else if (cmd == "search" || cmd == "SEARCH")
			search_phonebook(contacts);
	}
}

int	main(void)
{
	wait_user_command();
}
