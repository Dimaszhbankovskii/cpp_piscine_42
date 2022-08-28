#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

# define AMOUNT_FORM 3

class Intern
{
public:
	Intern();
	Intern(Intern const &src);
	Intern	&operator=(Intern const &src);
	~Intern();

	Form	*makeForm(std::string name, std::string target) const;
};

#endif