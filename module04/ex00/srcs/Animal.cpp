#include "../includes/Animal.hpp"

Animal::Animal()
{
	std::cout << VIOLET << "Animal Default constructor called" << NORMAL << std::endl;
	this->_type = "Animal";
}

Animal::Animal(Animal const &src)
{
	std::cout << VIOLET << "Animal Copy constructor called" << NORMAL << std::endl;
	*this = src;
}

Animal& Animal::operator=(Animal const &src)
{
	std::cout << VIOLET << "Animal Copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	this->_type = src.getType();
	return (*this);
}

Animal::~Animal()
{
	std::cout << VIOLET << "Animal Destructor called" << NORMAL << std::endl;
}

std::string	const	&Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "** Strange sounds!!! **" << std::endl;
	return ;
}
