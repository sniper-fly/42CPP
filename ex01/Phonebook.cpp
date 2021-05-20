
#include "Phonebook.hpp"
#include <iostream>
#include <regex>

Phonebook::Phonebook(void)
{
	_is_empty = true;
	_birthday_year = 0;
	_birthday_month = 0;
	_birthday_date = 0;
	for (int i = 0; i < TOTAL_DATA; i++) {
		string_data[i] = "";
	}
	_phone_number = "";
	_email_address = "";
}

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

static int is_digitstr(std::string number)
{
	if (number[0] == '\0')
		return (false);
	for (int i = 0; number[i]; i++) {
		if (!isdigit(number[i]))
			return (false);
	}
	return (true);
}

int		Phonebook::setPhoneNumber(std::string phone_number)
{
	if (phone_number[0] == '\0')
		;
	else {
		if (!is_digitstr(phone_number))
			return (false);
	}
	this->_phone_number = phone_number;
	return (true);
}

int			Phonebook::setBirthdayYear(std::string year)
{
	int y;

	if (year[0] == '\0')
		return (true);
	if (!is_digitstr(year))
		return (false);
	y = std::stoi(year);
	this->_birthday_year = y;
	return (true);
}

int			Phonebook::setBirthdayMonth(std::string month)
{
	int m;

	if (month[0] == '\0')
		return (true);
	if (!is_digitstr(month))
		return (false);
	m = std::stoi(month);
	if (!(1 <= m && m <= 12)) {
		return (false);
	}
	this->_birthday_month = m;
	return (true);
}

int			Phonebook::setBirthdayDate(std::string date)
{
	int d;

	if (date[0] == '\0')
		return (true);
	if (!is_digitstr(date))
		return (false);
	d = std::stoi(date);
	if (_birthday_month == 1 || _birthday_month == 3 || _birthday_month == 5 ||
		_birthday_month == 7 || _birthday_month == 8 || _birthday_month == 10 ||
		_birthday_month == 12)
	{
		if (!(1 <= d && d <= 31)) {
			return (false);
		}
	}
	else {
		if (!(1 <= d && d <= 30))
			return (false);
	}
	_birthday_date = d;
	return (true);
}
