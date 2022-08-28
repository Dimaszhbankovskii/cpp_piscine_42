#include "../includes/Intern.hpp"

Intern::Intern()
{
	std::cout << VIOLET << "Intern Default constructor called" << NORMAL << std::endl;
}

Intern::Intern(Intern const &src)
{
	std::cout << VIOLET << "Intern Copy constructor called" << NORMAL << std::endl;
	*this = src;
}

Intern	&Intern::operator=(Intern const &src)
{
	std::cout << VIOLET << "Intern Copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	return (*this);
}

Intern::~Intern()
{
	std::cout << VIOLET << "Intern Destructor called" << NORMAL << std::endl;
}

Form	*Intern::makeForm(std::string name, std::string target) const
{
	std::string	arrayName[AMOUNT_FORM] = {"shrubbery creation form", 
										"robotomy request form", 
										"presidential pardon form"};
	Form	*forms[AMOUNT_FORM] = {new ShrubberyCreationForm(target),
								new RobotomyRequestForm(target),
								new PresidentialPardonForm(target)};

	std::string	nameLowerCase = "";
	for (size_t i = 0; i < name.size(); i++)
		nameLowerCase += std::tolower(name[i]);
	
	Form	*resForm = NULL;

	for (int i = 0; i < AMOUNT_FORM; i++)
	{
		if (nameLowerCase == arrayName[i])
		{
			resForm = forms[i];
			std::cout << GREEN << "Intern creates " << resForm->getName() << NORMAL << std::endl;
		}
	}

	for (int i = 0; i < AMOUNT_FORM; i++)
	{
		if (resForm != forms[i])
			delete forms[i];
	}

	if (!resForm)
		std::cout << RED << "Intern doesn't create " << name << NORMAL << std::endl;
	return (resForm);
}
