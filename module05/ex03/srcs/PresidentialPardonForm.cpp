#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon Form", GRADE_SIGN_PRESIDENTIAL, GRADE_EXECUTE_PRESIDENTIAL)
{
	std::cout << "PresidentialPardonForm Default constructor without parametr called" << std::endl;
	this->_setTarget("default_target");
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("Presidential Pardon Form", GRADE_SIGN_PRESIDENTIAL, GRADE_EXECUTE_PRESIDENTIAL)
{
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
	this->_setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form("Presidential Pardon Form", GRADE_SIGN_PRESIDENTIAL, GRADE_EXECUTE_PRESIDENTIAL)
{
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
	*this = src;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
	if (this == &src)
		return (*this);
	this->_setName(src.getName());
	this->_isSigned = src.getIsSign();
	if (src.getGradeToSign() < MAX_GRADE || src.getGradeToExecute() < MAX_GRADE)
		throw Form::GradeTooHignException();
	if (src.getGradeToSign() > MIN_GRADE || src.getGradeToExecute() > MIN_GRADE)
		throw Form::GradeTooLowException();
	this->_setGradeToSign(src.getGradeToSign());
	this->_setGradeToExecute(src.getGradeToExecute());
	this->_setTarget(src.getTarget());
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

void	PresidentialPardonForm::_setTarget(std::string target)
{
	std::string	*tmp = (std::string *)&this->_target;
	*tmp = target;
}

std::string const	&PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSign() == false)
		throw Form::UnsignedToExecuteException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooHignException();
	
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
