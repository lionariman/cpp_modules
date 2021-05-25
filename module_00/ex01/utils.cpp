#include "headerPhoneBook.hpp"

void	Contact::addValue(std::string value, int numOfValue)
{
	if (numOfValue == FIRST_NAME)
		this->firstName = value;
	else if (numOfValue == LAST_NAME)
		this->lastName = value;
	else if (numOfValue == NICKNAME)
		this->nickname = value;
	else if (numOfValue == LOGIN)
		this->login = value;
	else if (numOfValue == POSTAL_ADDRESS)
		this->postalAddress = value;
	else if (numOfValue == EMAIL_ADDRESS)
		this->emailAddress = value;
	else if (numOfValue == PHONE_NUMBER)
		this->phoneNumber = value;
	else if (numOfValue == BIRTHDAY_DATE)
		this->birthdayDate = value;
	else if (numOfValue == FAVORITE_MEAL)
		this->favoriteMeal = value;
	else if (numOfValue == UNDERWEAR_COLOR)
		this->underwearColor = value;
	else if (numOfValue == DARKEST_SECRET)
		this->darkestSecret = value;
}

int	Contact::getIndex(void)
{
	return this->index;
}

std::string	Contact::getFirstName(void)
{
	return this->firstName;
}

std::string	Contact::getLastName(void)
{
	return this->lastName;
}

std::string	Contact::getNickname(void)
{
	return this->nickname;
}

void	Contact::setIndex(int index)
{
	this->index = index;
}

void	printMessage(int field_counter)
{
	if (field_counter == FIRST_NAME)
		std::cout << " ....... first name: ";
	else if (field_counter == LAST_NAME)
		std::cout << " ........ last name: ";
	else if (field_counter == NICKNAME)
		std::cout << " ......... nickname: ";
	else if (field_counter == LOGIN)
		std::cout << " ............ login: ";
	else if (field_counter == POSTAL_ADDRESS)
		std::cout << " ... postal address: ";
	else if (field_counter == EMAIL_ADDRESS)
		std::cout << " .... email address: ";
	else if (field_counter == PHONE_NUMBER)
		std::cout << " ..... phone number: ";
	else if (field_counter == BIRTHDAY_DATE)
		std::cout << " .... birthday date: ";
	else if (field_counter == FAVORITE_MEAL)
		std::cout << " .... favorite meal: ";
	else if (field_counter == UNDERWEAR_COLOR)
		std::cout << " .. underwear color: ";
	else if (field_counter == DARKEST_SECRET)
		std::cout << " ... darkest secret: ";
}

void	Contact::printContactInfo(void)
{
	std::cout << " ....... first name: " + this->firstName + "\n"
				 " ........ last name: " + this->lastName + "\n"
				 " ......... nickname: " + this->nickname + "\n"
				 " ............ login: " + this->login + "\n"
				 " ... postal address: " + this->postalAddress + "\n"
				 " .... email address: " + this->emailAddress + "\n"
				 " ..... phone number: " + this->phoneNumber + "\n"
				 " .... birthday date: " + this->birthdayDate + "\n"
				 " .... favorite meal: " + this->favoriteMeal + "\n"
				 " .. underwear color: " + this->underwearColor + "\n"
				 " ... darkest secret: " + this->darkestSecret << std::endl;
}

void	announce(std::string message)
{
	for (int i(0); i < (int)message.length(); i++)
		std::cout << "-";
	std::cout << "\n" + message << std::endl;
	for (int i(0); i < (int)message.length(); i++)
		std::cout << "-";
	std::cout << std::endl;
}

int		checkDigits(int counter)
{
	std::string command;
	std::cin >> command;

	if (command.compare("exit") == 0)
		return (-1);
	else if (std::cin.eof())
		return (-2);
	while (1)
	{
		int i(0);
		while (std::isdigit(command[i]))
			i++;
		if (i == (int)command.length())
		{
			int number = std::stoi(command) - 1;
			if (number < counter && number > -1)
				return (number);
			else if (number < 8)
				announce("|no such contact|");
			else
				announce("|too long number...|");
		}
		announce("|write a number from 1 to 8 please|");
		std::cin >> command;
		std::cout << std::endl;
		if (command.compare("EXIT") == 0)
			return (-1);
	}
	return (0);
}