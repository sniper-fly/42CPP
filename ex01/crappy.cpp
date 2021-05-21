#include <iostream>
#include "Phonebook.hpp"
#include <iomanip>
#include "colors.hpp"

static const int TOTAL_CONTACTS = 8;

void	receive_contact(std::string contact_str, std::string &input)
{
	std::cout << "Please enter your " << contact_str << "." << std::endl;
	while (true) {
		std::cout << contact_str << "> ";
		getline(std::cin, input, '\n');
		if (std::cin.eof())
			exit(0);
		if (input.empty()) {
			std::cout << RED << "Plz put it something." << RESET << std::endl;
			continue ;
		}
		break;
	}
}

void	put_confirm_msg(std::string kind)
{
	std::cout << RED << "Entered " << kind << " seems to be wrong. Plz confirm."
	<< RESET << std::endl;
}

void	add_phonebook(Phonebook &contacts)
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
		put_confirm_msg("phone number");
	}
	while (true) {
		receive_contact("birthday year", input);
		if (contacts.setBirthdayYear(input))
			break ;
		put_confirm_msg("birthday year");
	}
	while (true) {
		receive_contact("birthday month", input);
		if (contacts.setBirthdayMonth(input))
			break ;
		put_confirm_msg("birthday month");
	}
	while (true) {
		receive_contact("birthday date", input);
		if (contacts.setBirthdayDate(input))
			break ;
		put_confirm_msg("birthday date");
	}
	std::cout << GREEN << "-----Your phonebook has registered.-----"
			  << RESET << std::endl;
}

void	put_bufline(void)
{
	std::string hline = "----------";

	std::cout << '+' << hline << '+' << hline << '+' << hline << '+' << hline << '+'
	<< std::endl;
}

void	put_elem_row(Phonebook contact[TOTAL_CONTACTS], int index)
{
	std::cout << '|' << std::left << std::setw(10) << index << '|'
	<< std::left << std::setw(10) << contact[index].getStrData(FIRST_NAME) << '|'
	<< std::left << std::setw(10) << contact[index].getStrData(LAST_NAME) << '|'
	<< std::left << std::setw(10) << contact[index].getStrData(NICK_NAME) << '|' << std::endl;
	// << contact[index].getStrData()
	(void)contact;
}

void	put_phonebook_table(Phonebook contacts[TOTAL_CONTACTS])
{
	put_bufline();
	std::cout << '|' << "index     " << '|' << "first name" << '|' << "last name "
	<< '|' << "nickname  " << '|' << std::endl;
	put_bufline();
	for (int i = 0; i < TOTAL_CONTACTS && contacts[i].isEmpty() == false; i++) {
		put_elem_row(contacts, i);
		put_bufline();
	}
}

void	search_phonebook(Phonebook contacts[TOTAL_CONTACTS])
{
	std::string order_str;
	int order;

	put_phonebook_table(contacts);
	if (contacts[0].isEmpty()) {
		std::cout << "There is no entry yet." << std::endl;
		return ;
	}
	std::cout << "Plz put the index you want to know in detail." << std::endl;
	while (true) {
		std::cout << "index> ";
		getline(std::cin, order_str, '\n');
		if (std::cin.eof())
			exit (0);
		try {
			order = std::stoi(order_str);
		}
		catch (const std::invalid_argument& e) {
			std::cout << "plz put it again." << std::endl;
			continue ;
		}
		if (order > TOTAL_CONTACTS || order < 0 || contacts[order].isEmpty()) {
			std::cout << "Phonebook does not have index " << order << std::endl;
			continue ;
		}
		contacts[order].showAllInfo();
		break ;
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
