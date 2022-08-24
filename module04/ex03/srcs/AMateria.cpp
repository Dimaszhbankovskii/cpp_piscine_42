#include "../includes/AMateria.hpp"

AMateria::AMateria()
{
	std::cout << VIOLET << "AMateria Default constructor without parametr called" << NORMAL << std::endl;
	this->_type = "abstract materia";
}

AMateria::AMateria(std::string const &type)
{
	std::cout << VIOLET << "AMateria Default constructor called" << NORMAL << std::endl;
	this->_type = type;
}

AMateria::AMateria(AMateria const &src)
{
	std::cout << VIOLET << "AMateria Copy constructor called" << NORMAL << std::endl;
	*this = src;
}

AMateria&	AMateria::operator=(AMateria const &src)
{
	std::cout << VIOLET << "AMateria Copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	this->_type = src.getType();
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << VIOLET << "AMateria Destructor called" << NORMAL << std::endl;
}

std::string const	&AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << VIOLET << target.getName() << " can't use " << this->getType() << NORMAL << std::endl;
}
