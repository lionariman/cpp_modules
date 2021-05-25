#include "headerPhoneBook.hpp"

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
				std::cout << "--------------------------------------------\n"
							 "|  index  |first name| last name| nickname |\n"
							 "--------------------------------------------" << std::endl;
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
