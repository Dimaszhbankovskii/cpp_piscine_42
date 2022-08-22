#include "Dog.hpp"

Dog::Dog()
{
	std::cout << VIOLET << "Dog Default constructor called" << NORMAL << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << VIOLET << "Dog Copy constructor called" << NORMAL << std::endl;
	*this = src;
}

Dog& Dog::operator=(Dog const &src)
{
	std::cout << VIOLET << "Dog Copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	this->_type = src.getType();
	return (*this);
}

Dog::~Dog()
{
	std::cout << VIOLET << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "** WOOF WOOF WOOF WOOF WOOF!!! **" << std::endl;
	return ;
}
