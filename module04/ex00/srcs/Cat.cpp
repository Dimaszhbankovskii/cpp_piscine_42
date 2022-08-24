#include "../includes/Cat.hpp"

Cat::Cat()
{
	std::cout << VIOLET << "Cat Default constructor called" << NORMAL << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << VIOLET << "Cat Copy constructor called" << NORMAL << std::endl;
	*this = src;
}

Cat& Cat::operator=(Cat const &src)
{
	std::cout << VIOLET << "Cat Copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	this->_type = src.getType();
	return (*this);
}

Cat::~Cat()
{
	std::cout << VIOLET << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "** MEOW MEOW MEOW MEOW MEOW!!! **" << std::endl;
	return ;
}
