#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
public:
	Contact();
	~Contact();

	void		setFirstName(std::string const firstName);
	void		setLastName(std::string const lastName);
	void		setNickName(std::string const nickName);
	void		setPhoneNumber(std::string const phoneNumber);
	void		setDarkestSecret(std::string const darkestSecret);
	
	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickName() const;
	std::string	getPhoneNumber() const;
	std::string	getDarkestSecret() const;

private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
};

#endif