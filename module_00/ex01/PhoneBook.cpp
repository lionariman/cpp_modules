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
		std::cout << "first name: ";
	else if (field_counter == LAST_NAME)
		std::cout << "last name: ";
	else if (field_counter == NICKNAME)
		std::cout << "nickname: ";
	else if (field_counter == LOGIN)
		std::cout << "login: ";
	else if (field_counter == POSTAL_ADDRESS)
		std::cout << "postal address: ";
	else if (field_counter == EMAIL_ADDRESS)
		std::cout << "email address: ";
	else if (field_counter == PHONE_NUMBER)
		std::cout << "phone number: ";
	else if (field_counter == BIRTHDAY_DATE)
		std::cout << "birthday date: ";
	else if (field_counter == FAVORITE_MEAL)
		std::cout << "favorite meal: ";
	else if (field_counter == UNDERWEAR_COLOR)
		std::cout << "underwear color: ";
	else if (field_counter == DARKEST_SECRET)
		std::cout << "darkest secret: ";
}

void	Contact::printContactInfo(void)
{
	std::cout << this->firstName << std::endl;
	std::cout << this->lastName << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->login << std::endl;
	std::cout << this->postalAddress << std::endl;
	std::cout << this->emailAddress << std::endl;
	std::cout << this->phoneNumber << std::endl;
	std::cout << this->birthdayDate << std::endl;
	std::cout << this->favoriteMeal << std::endl;
	std::cout << this->underwearColor << std::endl;
	std::cout << this->darkestSecret << std::endl;
}

int		checkDigits(void)
{
	std::string command;
	std::cin >> command;

	int i(0);
	while (std::isdigit(command[i]))
		i++;
	if (i != (int)command.length())
	{
		std::cout << "Error: write a number please" << std::endl;
		checkDigits();
	}
	int number = std::stoi(command);
	return (number);
}

int		main(void)
{
	std::string	command;
	std::string	field;
	int			status(1);

	std::cout << "\n***** PHONE BOOK *****\n\n1) ADD\n2) SEARCH\n3) EXIT\n" << std::endl;

	int		counter(0);
	Contact contact[8];
	while (status)
	{
		std::cin >> command;
		if (command.compare("add") == 0 && counter < 8)
		{
			std::cout << "\n --- ADD ---" << std::endl;
			std::cout << "mark the following fileds please" << std::endl;

			int checker(0);
			while (checker < 12)
			{
				printMessage(checker);
				std::getline(std::cin, command);
				if (checker != 0)
				{
					contact[counter].addValue(command, checker);
					contact[counter].setIndex(counter);
				}
				checker++;
			}
			counter++;
		}
		else if (command.compare("search") == 0)
		{
			std::cout << "\n --- SEARCH ---" << std::endl;
			for (int i(0); i < counter; i++)
			{
				std::cout << std::setw(10) << contact[i].getIndex() << "|";
				std::cout << std::setw(10) << contact[i].getFirstName().substr(0, 10) + "|";
				std::cout << std::setw(10) << contact[i].getLastName().substr(0, 10) + "|";
				std::cout << std::setw(10) << contact[i].getNickname().substr(0, 10) + "|";
				std::cout << std::endl;
			}
			std::cout << "enter an index if you wanna see more about the contact\n: ";
			int contactIndex = checkDigits();
			contact[contactIndex].printContactInfo();
		}
		else if (command.compare("exit") == 0)
		{
			std::cout << "\n --- EXIT ---" << std::endl;
			status = 0;
		}
		else if (command.compare("add") && counter == 8)
			std::cout << "\nPHONE BOOK IS FULL" << std::endl;
		else
		{
			if (std::cin.eof())
				break ;
			std::cout << "\nnot valid command: " + command << std::endl;
		}
		command = "";
	}
	
	return (0);
}