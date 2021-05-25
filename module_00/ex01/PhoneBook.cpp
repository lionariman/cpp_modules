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
	std::cout << " ....... first name: " + this->firstName << std::endl;
	std::cout << " ........ last name: " + this->lastName << std::endl;
	std::cout << " ......... nickname: " + this->nickname << std::endl;
	std::cout << " ............ login: " + this->login << std::endl;
	std::cout << " ... postal address: " + this->postalAddress << std::endl;
	std::cout << " .... email address: " + this->emailAddress << std::endl;
	std::cout << " ..... phone number: " + this->phoneNumber << std::endl;
	std::cout << " .... birthday date: " + this->birthdayDate << std::endl;
	std::cout << " .... favorite meal: " + this->favoriteMeal << std::endl;
	std::cout << " .. underwear color: " + this->underwearColor << std::endl;
	std::cout << " ... darkest secret: " + this->darkestSecret << std::endl;
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

// Contact*	commandAdd(std::string command, int counter)
// {
// 	Contact *contact = new Contact;
// 	announce("|mark the following fileds please|");
// 	std::cout << std::endl;

// 	int checker(0);
// 	while (checker < 12)
// 	{
// 		printMessage(checker);
// 		if (std::getline(std::cin, command).eof())
// 			return (0);
// 		if (checker != 0)
// 		{
// 			contact->addValue(command, checker);
// 			contact->setIndex(counter + 1);
// 		}
// 		checker++;
// 	}
// 	announce("|contact details are filled|");
// 	return (contact);
// }

int		main(void)
{
	std::string	command;
	std::string	field;
	int			status(1);

	std::cout << "\n***** PHONE BOOK *****\n" << std::endl;

	int		counter(0);
	Contact contact[8];
	while (status)
	{
		announce("| >> ADD | SEARCH | EXIT << |");
		std::cin >> command;
		if (command.compare("ADD") == 0 && counter < 8)
		{
			// contact[counter] = commandAdd(command, counter);
			// counter++;
			announce("|mark the following fileds please|");
			std::cout << std::endl;

			int checker(0);
			while (checker < 12)
			{
				printMessage(checker);
				if (std::getline(std::cin, command).eof())
					return (0);
				if (checker != 0)
				{
					contact[counter].addValue(command, checker);
					contact[counter].setIndex(counter + 1);
				}
				checker++;
			}
			announce("|contact details are filled|");
			counter++;
		}
		else if (command.compare("SEARCH") == 0)
		{
			if (counter > 0)
			{
				std::cout << "--------------------------------------------" << std::endl;
				for (int i(0); i < counter; i++)
				{
					std::cout << std::setw(10) << contact[i].getIndex() << "|";
					if (contact[i].getFirstName().length() > 10)
						std::cout << std::setw(9) << contact[i].getFirstName().substr(0, 9) << ".|";
					else
						std::cout << std::setw(10) << contact[i].getFirstName().substr(0, 10) << "|";
					if (contact[i].getLastName().length() > 10)
						std::cout << std::setw(9) << contact[i].getLastName().substr(0, 9) << ".|";
					else
						std::cout << std::setw(10) << contact[i].getLastName().substr(0, 10) << "|";
					if (contact[i].getNickname().length() > 10)
						std::cout << std::setw(9) << contact[i].getNickname().substr(0, 9) << ".|";
					else
						std::cout << std::setw(10) << contact[i].getNickname().substr(0, 10) << "|";
					std::cout << std::endl;
				}
				std::cout << "--------------------------------------------" << std::endl;
				announce("|which contact do you want to see?|");
				int number = checkDigits(counter);
				if (number > -1)
				{
					announce("|information about the contact|");
					contact[number].printContactInfo();
					std::cout << std::endl;
				}
				else if (number == -2)
					return (0);
			}
			else
				announce("|phone book is empty|");
		}
		else if (command.compare("EXIT") == 0)
			status = 0;
		else if (command.compare("ADD") == 0 && counter == 8)
			announce("|PHONE BOOK IS FULL|");
		else if (std::cin.eof())
			return (0);
		else
			announce("|not valid command|");
		command = "";
	}
	return (0);
}
