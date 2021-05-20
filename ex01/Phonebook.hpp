#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>

enum : int {
	FIRST_NAME,
	LAST_NAME,
	NICK_NAME,
	LOGIN,
	POSTAL_ADDRESS,
	// EMAIL_ADDRESS,
	// PHONE_NUMBER,
	FAVORITE_MEAL,
	UNDERWEAR_COLOR,
	DARKEST_SECRET,
	TOTAL_DATA
};

const std::string contact_str[TOTAL_DATA] = {
	"first name",
	"last name",
	"nick name",
	"login",
	"postal address",
	// "email address",
	// "phone number",
	"favorite meal",
	"underwear color",
	"darkest secret"
};

class		Phonebook
{
	private:
		int			_index;
		bool		_is_empty;
		int			_birthday_year;
		int			_birthday_month;
		int			_birthday_date;
		std::string string_data[TOTAL_DATA];
		std::string	_phone_number;
		std::string	_email_address;

	public:
		bool			isEmpty(void);
		int				getIndex(void);

		std::string		getStrData(int i);
		std::string		getPhoneNumber(void);
		std::string		getEmailAddress(void);
		int				getBirthdayYear(void);
		int				getBirthdayMonth(void);
		int				getBirthdayDate(void);

		void		setStrData(int i, std::string data);
		int			setEmailAddress(std::string email_address);
		int			setPhoneNumber(std::string phone_number);
		int			setBirthdayYear(int year);
		int			setBirthdayMonth(int month);
		int			setBirthdayDate(int date);

		Phonebook(void);
		~Phonebook(void);
};

#endif
