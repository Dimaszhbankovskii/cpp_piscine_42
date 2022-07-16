#include <iostream>
#include "Contact.hpp"
#include "Phonebook.hpp"

int	main(void)
{
	Contact		contact[8];
	Phonebook	phonebook;
	std::string	cmd;
	// bool		flag = true;

	phonebook.showPrompt();
	while (!phonebook.getStopFlag())
	{
		phonebook.showCommands();
		std::cout << ">> " << std::ends;
		std::getline(std::cin, cmd);
		std::cout << "--------------------------------------------------" << std::endl;
		if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "SEARCH")
			phonebook.searchContact();
		else if (cmd == "EXIT")
		{
			// flag = false;
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
