#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

# define GRADE_SIGN_PRESIDENTIAL 25
# define GRADE_EXECUTE_PRESIDENTIAL 5

class PresidentialPardonForm : public Form
{
private:
	std::string const	_target;

	void				_setTarget(std::string target);

public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string const target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	PresidentialPardonForm	&operator=(PresidentialPardonForm const &src);
	virtual	~PresidentialPardonForm();

	std::string const	&getTarget() const;
	virtual void		execute(Bureaucrat const &executor) const;
};

#endif