
#include "Phonebook.hpp"
#include <iostream>
#include <regex>

Phonebook::Phonebook(void) { _is_empty = true; }

Phonebook::~Phonebook(void) { return ;}

bool			Phonebook::isEmpty(void) { return _is_empty;}

int				Phonebook::getIndex(void) { return _index; }

std::string		Phonebook::getStrData(int i) { return string_data[i]; }
std::string		Phonebook::getPhoneNumber(void) { return _phone_number; }
std::string		Phonebook::getEmailAddress(void) { return _email_address; }
int				Phonebook::getBirthdayYear(void) { return _birthday_year; }
int				Phonebook::getBirthdayMonth(void) { return _birthday_month; }
int				Phonebook::getBirthdayDate(void) { return _birthday_date; }

void	Phonebook::setStrData(int i, std::string data) { this->string_data[i] = data; }

static int is_email_valid(std::string email_address)
{
	const std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
	return (std::regex_match(email_address, pattern));
}

int		Phonebook::setEmailAddress(std::string email_address)
{
	if (email_address[0] == '\0')
		;
	else if (!is_email_valid(email_address))
		return (false);
	this->_email_address = email_address;
	return (true);
}

int		Phonebook::setPhoneNumber(std::string phone_number)
{
	if (phone_number[0] == '\0')
		;
	else {
		for (int i = 0; phone_number[i]; i++) {
			if (!isdigit(phone_number[i]))
				return (false);
		}
	}
	this->_phone_number = phone_number;
	return (true);
}

int			Phonebook::setBirthdayYear(std::string year)
{
	int y;

	y = std::stoi(year);
	this->_birthday_year = y;
}

int			Phonebook::setBirthdayMonth(std::string month)
{
	int m;
	m = std::stoi(month);
}

int			Phonebook::setBirthdayDate(std::string date)
{
	int d;
	d = std::stoi(date);
}
