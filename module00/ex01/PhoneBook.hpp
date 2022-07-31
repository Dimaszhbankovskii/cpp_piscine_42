#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();

	void		showPrompt() const;
	void		showCommands() const;
	void		setStopFlag();
	bool		getStopFlag();
	void		addContact();
	void		searchContact();
	void		finishWork() const;

private:
	Contact		_contact[8];
	int			_index;
	int			_amount;
	int			_maxContact;
	bool		_stopFlag;

	std::string	_inputData(std::string const mess);
	std::string	_printFormatStr(std::string const strNoFormat);
	void		_printContactInf();
};

#endif
