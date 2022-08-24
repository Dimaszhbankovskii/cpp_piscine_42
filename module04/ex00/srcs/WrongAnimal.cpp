#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << VIOLET << "Wrong Animal Default constructor called" << NORMAL << std::endl;
	this->_type = "wrong animal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << VIOLET << "Wrong Animal Copy constructor called" << NORMAL << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &src)
{
	std::cout << VIOLET << "Wrong Animal Copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	this->_type = src.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << VIOLET << "Wrong Animal Destructor called" << NORMAL << std::endl;
}

std::string	const	&WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "** Wrong Strange sounds!!! **" << std::endl;
	return ;
}
