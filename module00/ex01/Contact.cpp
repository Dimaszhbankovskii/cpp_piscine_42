#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::setFirstName(std::string const firstName)
{
	this->_firstName = firstName;
	return ;
}

void	Contact::setLastName(std::string const lastName)
{
	this->_lastName = lastName;
	return ;
}

void	Contact::setNickName(std::string const nickName)
{
	this->_nickName = nickName;
	return ;
}

void	Contact::setPhoneNumber(std::string const phoneNumber)
{
	this->_phoneNumber = phoneNumber;
	return ;
}

void	Contact::setDarkestSecret(std::string const darkestSecret)
{
	this->_darkestSecret = darkestSecret;
	return ;
}

std::string	Contact::getFirstName() const
{
	return (this->_firstName);
}

std::string	Contact::getLastName() const
{
	return (this->_lastName);
}

std::string	Contact::getNickName() const
{
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}
