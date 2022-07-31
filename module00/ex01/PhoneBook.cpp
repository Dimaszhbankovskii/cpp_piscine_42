#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
	this->_amount = 0;
	this->_maxContact = 8;
	this->_stopFlag = false;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::showPrompt() const
{
	std::cout << "--------------------------------------------------\n";
	std::cout << "-----                                        -----\n";
	std::cout << "-----               \033[1;36mPhoneBook\033[0m                -----\n";
	std::cout << "-----                                        -----\n";
	std::cout << "--------------------------------------------------\n";
	std::cout << "-----      Welcome to program PhoneBook      -----\n";
	std::cout << "--------------------------------------------------" << std::endl;
	return ;
}

void	PhoneBook::showCommands() const
{
	std::cout << "--------------------------------------------------\n"
		<< "- Please select and enter an available command:  -\n"
		<< "- 1. ADD                                         -\n"
		<< "- 2. SEARCH                                      -\n"
		<< "- 3. EXIT                                        -\n"
		<< "--------------------------------------------------" << std::endl;
	return ;
}

void	PhoneBook::setStopFlag()
{
	this->_stopFlag = true;
	return ;
}

bool	PhoneBook::getStopFlag()
{
	return (this->_stopFlag);
}

std::string	PhoneBook::_inputData(std::string const mess)
{
	std::string	data;
	bool		flag = true;

	while (flag)
	{
		std::cout << mess << std::endl;
		std::cout << ">> " << std::ends;
		std::getline(std::cin, data);
		if (std::cin.eof())
		{
			std::cout << "Entered ^D. Program PhoneBook are exiting..." << std::endl;
			this->setStopFlag();
			return ("");
		}
		if (data.empty())
			std::cout << ">> \033[0;31mThis field is required.\033[0m" << std::endl;
		else
			flag = false;
	}
	return (data);
}

void	PhoneBook::addContact()
{
	if (this->_index >= this->_maxContact)
		this->_index = 0;
	std::cout << "--------------------------------------------------\n"
		<< "- To add a new contact to PhoneBook fill in      -\n"
		<< "- the following information                      -\n"
		<< "--------------------------------------------------" << std::endl;
	if (!this->getStopFlag())
	{
		this->_contact[this->_index].setFirstName(this->_inputData(">> Input first name:"));
		std::cout << "--------------------------------------------------" << std::endl;
	}
	if (!this->getStopFlag())
	{
		this->_contact[this->_index].setLastName(this->_inputData(">> Input last name:"));
		std::cout << "--------------------------------------------------" << std::endl;
	}
	if (!this->getStopFlag())
	{
		this->_contact[this->_index].setNickName(this->_inputData(">> Input nickname:"));
		std::cout << "--------------------------------------------------" << std::endl;
	}
	if (!this->getStopFlag())
	{
		this->_contact[this->_index].setPhoneNumber(this->_inputData(">> Input phone number:"));
		std::cout << "--------------------------------------------------" << std::endl;
	}
	if (!this->getStopFlag())
	{
		this->_contact[this->_index].setDarkestSecret(this->_inputData(">> Input darkest secret:"));
		std::cout << "--------------------------------------------------" << std::endl;
	}
	this->_index++;
	if (this->_amount < this->_maxContact)
		this->_amount++;
	return ;
}

std::string	PhoneBook::_printFormatStr(std::string const strNoFormat)
{
	std::string	strFormat = strNoFormat;
	int			lenStr = strNoFormat.length();

	if (lenStr >= 10)
	{
		strFormat.resize(9);
		strFormat += ".";
	}
	return (strFormat);
}

void	PhoneBook::_printContactInf()
{
	std::string	tmp;
	int			index;

	std::cout << ">> " << std::ends;
	std::getline(std::cin, tmp);
	if (std::cin.eof())
	{
		std::cout << "Entered ^D. Program PhoneBook are exiting..." << std::endl;
		this->setStopFlag();
		return ;
	}
	if (tmp.length() > 1)
	{
		std::cout << ">> Invalid index entered." << std::endl;
		return ;
	}
	else
		index = tmp[0] - 48;
	if (index >= 1 && index <= this->_maxContact)
	{
		if (index <= this->_amount)
		{
			std::cout << ">> First name: " << this->_contact[index - 1].getFirstName() << "\n";
			std::cout << ">> Last name: " << this->_contact[index - 1].getLastName() << "\n";
			std::cout << ">> Nickname: " << this->_contact[index - 1].getNickName() << "\n";
			std::cout << ">> Phone number: " << this->_contact[index - 1].getPhoneNumber() << "\n";
			std::cout << ">> Darkest secret: " << this->_contact[index - 1].getDarkestSecret() << std::endl;
		}
		else
			std::cout << ">> This contact does not exist in PhoneBook." << std::endl;
	}
	else
		std::cout << ">> Invalid index entered." << std::endl;
	return ;
}

void	PhoneBook::searchContact()
{
	if (!this->_amount)
	{
		std::cout << ">> PhoneBook is empty. First add a contact." << std::endl;
		return ;
	}
	std::cout << "---------------------------------------------\n";
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First name";
	std::cout << "|" << std::setw(10) << "Last name";
	std::cout << "|" << std::setw(10) << "Nickname" << "|\n";
	std::cout << "---------------------------------------------\n";

	for (int i = 0; i < this->_amount; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << this->_printFormatStr(this->_contact[i].getFirstName());
		std::cout << "|" << std::setw(10) << this->_printFormatStr(this->_contact[i].getLastName());
		std::cout << "|" << std::setw(10) << this->_printFormatStr(this->_contact[i].getNickName());
		std::cout << "|" << std::endl;
	}
	std::cout << "---------------------------------------------\n";
	std::cout << "- To display details information of contact -\n"; 
	std::cout << "- select and enter index (1, 2, ... 8).     -\n";
	std::cout << "---------------------------------------------" << std::endl;
	this->_printContactInf();
	return ;
}

void	PhoneBook::finishWork() const
{
	std::cout << "Program PhoneBook are exiting...\nThanks!" << std::endl;
	return ;
}
