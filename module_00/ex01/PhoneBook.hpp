#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include <iostream>
# include <iomanip>
# include <string>

# define FIRST_NAME 1
# define LAST_NAME 2
# define NICKNAME 3
# define LOGIN 4
# define POSTAL_ADDRESS 5
# define EMAIL_ADDRESS 6
# define PHONE_NUMBER 7
# define BIRTHDAY_DATE 8
# define FAVORITE_MEAL 9
# define UNDERWEAR_COLOR 10
# define DARKEST_SECRET 11

class PhoneBook
{
	private:
		int index;
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string login;
		std::string postalAddress;
		std::string emailAddress;
		std::string phoneNumber;
		std::string birthdayDate;
		std::string favoriteMeal;
		std::string underwearColor;
		std::string darkestSecret;

	public:
		// PhoneBook();
		// ~PhoneBook();
		void		addValue(std::string value, int numOfValue);
		void		setIndex(int index);
		void		printContactInfo(void);
		int			getIndex(void);
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
};

void	printMessage(int field_counter);
void	announce(std::string message);
int		checkDigits(int counter);

#endif