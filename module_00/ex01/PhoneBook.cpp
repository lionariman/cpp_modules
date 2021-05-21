/*

first name,
last name,
nickname,
login,
postal address,
email address,
phone number,
birthday date,
favorite meal,
underwear color and darkest secret.

*/

#include "headerPhoneBook.hpp"

int		main(void)
{
	std::string	buffor_for_fields[11];
	std::string	command;
	std::string	field;
	int			counter;
	
	std::cout << "\n***** PHONE BOOK *****\n\n1) ADD\n2) SEARCH\n3) EXIT\n" << std::endl;
	std::cin >> command;

	counter = 0;
	if (command.compare("add") == 0)
	{
		std::cout << "\nYOU SHOULD MARK EACH FIELD BELOW\n\n"
					"first name,\n"
					"last name,\n"
					"nickname,\n"
					"login,\n"
					"postal address,\n"
					"email address,\n"
					"phone number,\n"
					"birthday date,\n"
					"favorite meal,\n"
					"underwear color and darkest secret.\n" << std::endl;

		std::cout << "first name: ";
		std::cin >> field;
		buffor_for_fields[counter++] = field;
		std::cout << "last name: ";
		std::cin >> field;
		buffor_for_fields[counter++] = field;
		std::cout << "nickname: ";
		std::cin >> field;
		buffor_for_fields[counter++] = field;
		std::cout << "login: ";
		std::cin >> field;
		buffor_for_fields[counter++] = field;
		std::cout << "postal address: ";
		std::cin >> field;
		buffor_for_fields[counter++] = field;
		std::cout << "email address: ";
		std::cin >> field;
		buffor_for_fields[counter++] = field;
		std::cout << "phone number: ";
		std::cin >> field;
		buffor_for_fields[counter++] = field;
		std::cout << "birthday date: ";
		std::cin >> field;
		buffor_for_fields[counter++] = field;
		std::cout << "favorite meal: ";
		std::cin >> field;
		buffor_for_fields[counter++] = field;
		std::cout << "inderwear color: ";
		std::cin >> field;
		buffor_for_fields[counter++] = field;
		std::cout << "darkest secret: ";
		std::cin >> field;
		buffor_for_fields[counter++] = field;

		std::cout << std::endl;
		for (int i(0); i < 11; i++)
			std::cout << i << ") " + buffor_for_fields[i] << std::endl;
		std::cout << "\nBYE!" << std::endl;
	}
	else if (command.compare("search") == 0)
		std::cout << "\n --- SEARCH ---" << std::endl;
	else if (command.compare("exit") == 0)
		std::cout << "\n --- EXIT ---" << std::endl;
	else
		std::cout << "\nnot valid command: " + command << std::endl;
	return (0);
}