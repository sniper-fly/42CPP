#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>

enum : int {
	FIRST_NAME,
	LAST_NAME,
	NICK_NAME,
	LOGIN,
	POSTAL_ADDRESS,
	EMAIL_ADDRESS,
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
	"email address",
	// "phone number",
	"favorite meal",
	"underwear color",
	"darkest secret"
};

class		Phonebook
{
	private:
		bool		_is_empty;
		int			_birthday_year;
		int			_birthday_month;
		int			_birthday_date;
		std::string string_data[TOTAL_DATA];
		std::string	_phone_number;

	public:
		bool			isEmpty(void);

		std::string		getStrData(int i);
		std::string		getPhoneNumber(void);
		int				getBirthdayYear(void);
		int				getBirthdayMonth(void);
		int				getBirthdayDate(void);

		void		showAllInfo(void);

		void		setIsEmpty(bool tf);
		void		setStrData(int i, std::string data);
		int			setPhoneNumber(std::string phone_number);
		int			setBirthdayYear(std::string year);
		int			setBirthdayMonth(std::string month);
		int			setBirthdayDate(std::string date);

		Phonebook(void);
		~Phonebook(void);
};

#endif
