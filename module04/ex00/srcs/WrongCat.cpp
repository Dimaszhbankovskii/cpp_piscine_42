#include "../includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << VIOLET << "Wrong Cat Default constructor called" << NORMAL << std::endl;
	this->_type = "wrong cat";
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	std::cout << VIOLET << "Wrong Cat Copy constructor called" << NORMAL << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator=(WrongCat const &src)
{
	std::cout << VIOLET << "Wrong Cat Copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	this->_type = src.getType();
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << VIOLET << "Wrong Cat Destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "** MEOW MEOW MEOW MEOW MEOW!!! **" << std::endl;
	return ;
}
