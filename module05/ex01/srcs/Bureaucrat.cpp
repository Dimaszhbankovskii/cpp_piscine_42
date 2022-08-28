#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << VIOLET << "Bureaucrat Default constructor without parametr called" << NORMAL << std::endl;	
	this->_setName("NoName");
	this->_grade = MIN_GRADE;
}

Bureaucrat::Bureaucrat(std::string const name, int grade)
{
	std::cout << VIOLET << "Bureaucrat Default constructor called" << NORMAL << std::endl;
	this->_setName(name);
	if (grade < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	if (grade > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	std::cout << VIOLET << "Bureaucrat Copy constructor called" << NORMAL << std::endl;
	if (src.getGrade() < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	if (src.getGrade() > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	*this = src;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &src)
{
	std::cout << VIOLET << "Bureaucrat Copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	this->_setName(src.getName());
	if (src.getGrade() < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	if (src.getGrade() > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = src.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << VIOLET << "Bureaucrat Destructor called" << NORMAL << std::endl;
}

std::string const	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	std::cout << CYAN << "Bureaucrat tries to increment grade" << NORMAL << std::endl;
	if (this->_grade == MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}

void	Bureaucrat::decrementGrade()
{
	std::cout << CYAN << "Bureaucrat tries to decrement grade" << NORMAL << std::endl;
	if (this->_grade == MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;
}

void	Bureaucrat::_setName(std::string name)
{
	std::string	*tmp = (std::string *)&this->_name;
	*tmp = name;
}

void	Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& exc)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName();
		std::cout << " because " << exc.what() << std::endl;
	}
}

char const	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade is too high!!!");
}

char const	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade is too low!!!");
}

std::ostream	&operator<<(std::ostream &outstream, Bureaucrat const &src)
{
	outstream << BLUE << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << NORMAL;
	return (outstream);
}
