#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation Form", GRADE_SIGN_SHRUBBERY, GRADE_EXECUTE_SHRUBBERY)
{
	std::cout << "ShrubberyCreationForm Default constructor without parametr called" << std::endl;
	this->_setTarget("default_target");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("Shrubbery Creation Form", GRADE_SIGN_SHRUBBERY, GRADE_EXECUTE_SHRUBBERY)
{
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
	this->_setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form("Shrubbery Creation Form", GRADE_SIGN_SHRUBBERY, GRADE_EXECUTE_SHRUBBERY)
{
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
	*this = src;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
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

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

void	ShrubberyCreationForm::_setTarget(std::string target)
{
	std::string	*tmp = (std::string *)&this->_target;
	*tmp = target;
}

std::string const	&ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSign() == false)
		throw Form::UnsignedToExecuteException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooHignException();
	
	std::ofstream	outputFile;
	std::string		nameFile = this->getTarget();
	
	nameFile.append("_shrubbery");
	outputFile.open(nameFile.c_str());
	if (!outputFile.is_open())
		throw ShrubberyCreationForm::OpenFileException();
	outputFile << PICTUTE_TREE << std::endl;
	outputFile.close();
}

char const	*ShrubberyCreationForm::OpenFileException::what() const throw()
{
	return ("File didn't open!!!");
}
