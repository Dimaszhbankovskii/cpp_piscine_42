#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form", GRADE_SIGN_ROBOTOMY, GRADE_EXECUTE_ROBOTOMY)
{
	std::cout << "RobotomyRequestForm Default constructor without parametr called" << std::endl;
	this->_setTarget("default_target");
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("Robotomy Request Form", GRADE_SIGN_ROBOTOMY, GRADE_EXECUTE_ROBOTOMY)
{
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
	this->_setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form("Robotomy Request Form", GRADE_SIGN_ROBOTOMY, GRADE_EXECUTE_ROBOTOMY)
{
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
	*this = src;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
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

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

void	RobotomyRequestForm::_setTarget(std::string target)
{
	std::string	*tmp = (std::string *)&this->_target;
	*tmp = target;
}

std::string const	&RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSign() == false)
		throw Form::UnsignedToExecuteException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooHignException();
	
	// std::srand(std::time(nullptr));
	if (std::rand() % 2 == 1)
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->getTarget() << " has not been robotomized successfully" << std::endl;
}
