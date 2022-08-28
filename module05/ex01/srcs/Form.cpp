#include "../includes/Form.hpp"

Form::Form() : _gradeToSign(MIN_GRADE), _gradeToExecute(MIN_GRADE)
{
	std::cout << VIOLET << "Form Deafault constructor without parametr called" << NORMAL << std::endl;
	this->_setName("NoName");
	this->_isSigned = false;
	this->_setGradeToSign(MIN_GRADE);
	this->_setGradeToExecute(MIN_GRADE);
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _gradeToSign(MIN_GRADE), _gradeToExecute(MIN_GRADE)
{
	std::cout << VIOLET << "Form Deafault constructor called" << NORMAL << std::endl;
	this->_setName(name);
	this->_isSigned = false;
	if (gradeToSign < MAX_GRADE || gradeToExecute < MAX_GRADE)
		throw Form::GradeTooHignException();
	if (gradeToSign > MIN_GRADE || gradeToExecute > MIN_GRADE)
		throw Form::GradeTooLowException();
	this->_setGradeToSign(gradeToSign);
	this->_setGradeToExecute(gradeToExecute);
}

Form::Form(Form const &src) : _gradeToSign(MIN_GRADE), _gradeToExecute(MIN_GRADE)
{
	std::cout << VIOLET << "Form Copy constructor called" << NORMAL << std::endl;
	if (src.getGradeToSign() < MAX_GRADE || src.getGradeToExecute() < MAX_GRADE)
		throw Form::GradeTooHignException();
	if (src.getGradeToSign() > MIN_GRADE || src.getGradeToExecute() > MIN_GRADE)
		throw Form::GradeTooLowException();
	*this = src;
}

Form	&Form::operator=(Form const &src)
{
	std::cout << VIOLET << "Form Copy assignment called" << NORMAL << std::endl;
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
	return (*this);
}

Form::~Form()
{
	std::cout << VIOLET << "Form Destructor called" << NORMAL << std::endl;
}

std::string const	&Form::getName() const
{
	return (this->_name);
}

bool const	&Form::getIsSign() const
{
	return (this->_isSigned);
}

int const	&Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int	const	&Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void	Form::_setName(std::string name)
{
	std::string	*tmp = (std::string *)&this->_name;
	*tmp = name;
}

void	Form::_setGradeToSign(int grade)
{
	int	*tmp = (int *)&this->_gradeToSign;
	*tmp = grade;
}

void	Form::_setGradeToExecute(int grade)
{
	int	*tmp = (int *)&this->_gradeToExecute;
	*tmp = grade;
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw Form::GradeTooHignException();
	this->_isSigned = true;
}

char const	*Form::GradeTooHignException::what() const throw()
{
	return ("Form grade is too high!!!");
}

char const	*Form::GradeTooLowException::what() const throw()
{
	return ("Form grade is too low!!!");
}

std::ostream	&operator<<(std::ostream &outstream, Form const &form)
{
	outstream << GREEN << "Form: " << form.getName() << " | ";
	outstream << "Signed: ";
	if (form.getIsSign())
		outstream << "yes | ";
	else
		outstream << "no | ";
	outstream << "Grade to signed: " << form.getGradeToSign() << " | ";
	outstream << "Grade to execute: " << form.getGradeToExecute() << NORMAL;
	return (outstream);
}
