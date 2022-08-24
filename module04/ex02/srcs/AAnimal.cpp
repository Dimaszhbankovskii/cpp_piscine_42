#include "../includes/AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << VIOLET << "Animal Default constructor called" << NORMAL << std::endl;
	this->_type = "Animal";
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << VIOLET << "Animal Copy constructor called" << NORMAL << std::endl;
	*this = src;
}

AAnimal& AAnimal::operator=(AAnimal const &src)
{
	std::cout << VIOLET << "Animal Copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	this->_type = src.getType();
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << VIOLET << "Animal Destructor called" << NORMAL << std::endl;
}

std::string	const	&AAnimal::getType() const
{
	return (this->_type);
}
