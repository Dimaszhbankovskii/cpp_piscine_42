#include <iostream>
#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->_index = 0;
	this->_amount = 0;
	this->_maxContact = 8;
	this->_stopFlag = false;
	return;
}

Phonebook::~Phonebook()
{
	return;
}

void	Phonebook::showPrompt()
{
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "-----                                        -----" << std::endl;
	std::cout << "-----               PhoneBook                -----" << std::endl;
	std::cout << "-----                                        -----" << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "-----      Welcome to program PhoneBook      -----" << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	return ;
}

void	Phonebook::showCommands()
{
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "- Please select and enter an available command:  -" << std::endl;
	std::cout << "- 1. ADD                                         -" << std::endl;
	std::cout << "- 2. SEARCH                                      -" << std::endl;
	std::cout << "- 3. EXIT                                        -" << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	return ;
}

void	Phonebook::setStopFlag()
{
	this->_stopFlag = true;
	return ;
}

bool	Phonebook::getStopFlag()
{
	return (this->_stopFlag);
}

std::string	Phonebook::_inputData(std::string mess)
{
	std::string	data;
	bool		flag = true;

	while (flag)
	{
		std::cout << mess << std::endl;
		std::cout << ">> " << std::ends;
		std::getline(std::cin, data);
		// if (std::cin.eof())
		// {
		// 	std::cout << "Entered ^D. STOP PROGRAM." << std::endl;
		// 	this->setStopFlag();
		// 	return ;
		// }
		if (data.empty())
			std::cout << ">> This field is required." << std::endl;
		else
			flag = false;
	}
	return (data);
}

void	Phonebook::addContact()
{
	if (this->_index >= this->_maxContact)
		this->_index = 0;
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "- To add a new contact to PhoneBook fill in      -" << std::endl;
	std::cout << "- the following information                      -" << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	this->_contact[this->_index].setFirstName(this->_inputData(">> Input first name:"));
	std::cout << "--------------------------------------------------" << std::endl;
	this->_contact[this->_index].setLastName(this->_inputData(">> Input last name:"));
	std::cout << "--------------------------------------------------" << std::endl;
	this->_contact[this->_index].setNickName(this->_inputData(">> Input nickname:"));
	std::cout << "--------------------------------------------------" << std::endl;
	this->_contact[this->_index].setPhoneNumber(this->_inputData(">> Input phone number:"));
	std::cout << "--------------------------------------------------" << std::endl;
	this->_contact[this->_index].setDarkestSecret(this->_inputData(">> Input darkest secret:"));
	std::cout << "--------------------------------------------------" << std::endl;
	this->_index++;
	if (this->_amount < this->_maxContact)
		this->_amount++;
	return ;
}

std::string	Phonebook::_printFormatStr(std::string strNoFormat)
{
	std::string	strFormat;
	int			lenStr = strNoFormat.length();

	if (lenStr >= 10)
	{
		strFormat = strNoFormat;
		strFormat.resize(9);
		strFormat += ".";
	}
	else
	{
		for (int i = 0; i < 10 - lenStr; i++)
			strFormat += " ";
		strFormat += strNoFormat;
	}
	return (strFormat);
}

void	Phonebook::_printContactInf()
{
	std::string	tmp;
	int			index;

	std::cout << ">> " << std::ends;
	std::getline(std::cin, tmp);
	if (tmp.length() > 1)
		std::cout << ">> Invalid index entered." << std::endl;
	else
	{
		index = tmp[0] - 48;
	}
	if (index >= 1 && index <= this->_maxContact)
	{
		if (index <= this->_amount)
		{
			std::cout << ">> First name: " << this->_contact[index - 1].getFirstName() << "\n"
				<< ">> Last name: " << this->_contact[index - 1].getLastName() << "\n"
				<< ">> Nickname: " << this->_contact[index - 1].getNickName() << "\n"
				<< ">> Phone number: " << this->_contact[index - 1].getPhoneNumber() << "\n"
				<< ">> Darkest secret: " << this->_contact[index - 1].getDarkestSecret() << std::endl;
		}
		else
			std::cout << ">> This contact does not exist in PhoneBook." << std::endl;
	}
	else
		std::cout << ">> Invalid index entered." << std::endl;
	return ;
}

void	Phonebook::searchContact()
{
	if (!this->_amount)
	{
		std::cout << ">> PhoneBook is empty. First add a contact." << std::endl;
		return ;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < this->_amount; i++)
	{
		std::cout << "|" << "         " << i + 1 << "|" 
			<< this->_printFormatStr(this->_contact[i].getFirstName()) << "|"
			<< this->_printFormatStr(this->_contact[i].getLastName()) << "|"
			<< this->_printFormatStr(this->_contact[i].getNickName())
			<< "|" << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "- To display details information of contact -\n" 
		<< "- select and enter index (1, 2, ... 8).     -" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	this->_printContactInf();
	return ;
}

void	Phonebook::finishWork()
{
	std::cout << "Program PhoneBook are exiting...\nThanks!" << std::endl;
	return ;
}
