#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
public:
	Phonebook();
	~Phonebook();

	void		showPrompt();
	void		showCommands();
	void		setStopFlag();
	bool		getStopFlag();
	void		addContact();
	void		searchContact();
	void		finishWork();

private:
	Contact		_contact[8];
	int			_index;
	int			_amount;
	int			_maxContact;
	bool		_stopFlag;

	std::string	_inputData(std::string mess);
	std::string	_printFormatStr(std::string strNoFormat);
	void		_printContactInf();
};

#endif
