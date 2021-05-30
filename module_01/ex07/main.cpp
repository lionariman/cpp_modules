#include "Replace.hpp"

void	errorExit(string errorMessage, string value)
{
	if (value.empty())
		std::cout << RED << "Error: " +
			errorMessage + ": ..." << RED << std::endl;
	else
		std::cout << RED << "Error: " +
			errorMessage + ": " + value << RED << std::endl;
	exit (1);
}

void	setFilename(Replace &replacer)
{
	string command;

	std::cout << CYAN << "Enter a filename: " << CYAN;
	std::getline(std::cin, command);
	replacer.setName(command);
}

void	setSubstituteString(Replace &repalcer)
{
	string command;

	std::cout << CYAN << "Enter an s1: " << CYAN;
	std::getline(std::cin, command);
	repalcer.setS1(command);
}

void	setReplaciableString(Replace &repalcer)
{
	string command;

	std::cout << CYAN << "Enter an s2: " << CYAN;
	std::getline(std::cin, command);
	repalcer.setS2(command);
}

void	checkArguments(Replace &replacer)
{
	if (replacer.getName().empty())
		errorExit("filename is empty", replacer.getName());
	else if (replacer.getS1().empty())
		errorExit("s1 is empty", replacer.getS1());
	else if (replacer.getS2().empty())
		errorExit("s2 is empty", replacer.getS2());
}

void	checkLoop(void)
{
	string command;

	while (true)
	{
		std::cout << PINK << "\nContinue?\n[y/n]\n" << PINK << std::endl;
		std::getline(std::cin, command);

		if (command.compare("y") == 0)
			break ;
		else if (command.compare("n") == 0)
			exit (0);
	}
	std::cout << std::endl;
}

void	replacing(Replace &replacer)
{
	std::ofstream createFile;
	std::ofstream outputFile;
	std::ifstream inputFile;
	char ch;
	string line;
	std::size_t found;

	if (!inputFile.is_open())
	{
		createFile.open(replacer.getName(), std::ofstream::app);
		if (!createFile.is_open())
			errorExit("cannot create a file", replacer.getName());
	}
	inputFile.open(replacer.getName());
	if (!inputFile.is_open())
		errorExit("cannot open an input file", replacer.getName());
	outputFile.open(replacer.getName() + ".replace");
	if (!inputFile.is_open())
		errorExit("cannot create an output file", replacer.getName());
	while (inputFile.get(ch))
		line += ch;
	while (true)
	{
		found = line.find(replacer.getS1());
		if (found == string::npos)
			break ;
		line.replace(found, replacer.getS1().length(), replacer.getS2());
		found += replacer.getS2().length();
	}
	outputFile << line;
	createFile.close();
	outputFile.close();
	inputFile.close();
}

int	main(void)
{
	std::cout << GREEN << "\n*** Replacer ***\n" << GREEN << std::endl;

	Replace replacer;

	while (true)
	{
		setFilename(replacer);
		setSubstituteString(replacer);
		setReplaciableString(replacer);
		checkArguments(replacer);
		replacing(replacer);
		checkLoop();
	}
}