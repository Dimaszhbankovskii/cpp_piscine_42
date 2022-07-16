#include "Contact.hpp"

void	Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
	return ;
}

void	Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
	return ;
}

void	Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
	return ;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
	return ;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
	return ;
}

std::string	Contact::getFirstName()
{
	return (firstName);
}

std::string	Contact::getLastName()
{
	return (lastName);
}

std::string	Contact::getNickName()
{
	return (nickName);
}

std::string	Contact::getPhoneNumber()
{
	return (phoneNumber);
}

std::string	Contact::getDarkestSecret()
{
	return (darkestSecret);
}
