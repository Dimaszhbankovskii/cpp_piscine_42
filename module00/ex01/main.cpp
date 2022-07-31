#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	cmd;

	phonebook.showPrompt();
	while (!phonebook.getStopFlag())
	{
		phonebook.showCommands();
		std::cout << ">> " << std::ends;
		std::getline(std::cin, cmd);
		if (std::cin.eof())
		{
			std::cout << "Entered ^D. Program PhoneBook are exiting..." << std::endl;
			return (0);
		}
		std::cout << "--------------------------------------------------" << std::endl;
		if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "SEARCH")
			phonebook.searchContact();
		else if (cmd == "EXIT")
		{
			phonebook.setStopFlag();
			phonebook.finishWork();
		}
		else if (cmd.empty())
			continue;
		else
			std::cout << ">> '" << cmd << "'" << " is not available command." << std::endl;
	}
	return (0);
}
