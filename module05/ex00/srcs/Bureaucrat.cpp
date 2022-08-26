#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default constructor without parametr called" << std::endl;	
	this->_setName("NoName");
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(std::string const name, int grade)
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
	this->_setName(name);
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &src)
{
	std::cout << "Bureaucrat Copy assignment called" << std::endl;
	if (this == &src)
		return (*this);
	this->_setName(src.getName());
	this->_grade = src.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

std::string const	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::_setName(std::string name)
{
	std::string	*tmp = (std::string *)&this->_name;
	*tmp = name;
}