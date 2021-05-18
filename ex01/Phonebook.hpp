#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>

class		Phonebook
{
	private:
		int			_index;
		bool		_isempty;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_login;
		std::string	_postal_address;
		std::string	_email_address;
		std::string	_phone_number;
		struct tm	_birthday_date;
		std::string	_favorite_meal;
		std::string	_underwear_color;
		std::string	_darkest_secret;

	public:
		int				getIndex(void);
		bool			isEmpty(void);
		std::string		getFirstName(void);
		std::string		getLastName(void);
		std::string		getNickName(void);
		std::string		getLogin(void);
		std::string		getPostalAddress(void);
		std::string		getEmailAddress(void);
		std::string		getPhoneNumber(void);
		struct tm		getBirthdayDate(void);
		std::string		getFavoriteMeal(void);
		std::string		getUnderwearColor(void);
		std::string		getDarkestSecret(void);
};

#endif
