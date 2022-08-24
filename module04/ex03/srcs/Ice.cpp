#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << CYAN << "Ice Default constructor without parametr called" << NORMAL << std::endl;
}

Ice::Ice(Ice const &src) : AMateria(src)
{
	std::cout << CYAN << "Ice Copy constructor called" << NORMAL << std::endl;
	*this = src;
}

Ice&	Ice::operator=(Ice const &src)
{
	std::cout << CYAN << "Ice Copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	this->_type = src.getType();
	return (*this);
}

Ice::~Ice()
{
	std::cout << CYAN << "Ice Destructor called" << NORMAL << std::endl;
}

AMateria*	Ice::clone() const
{
	AMateria	*newMateria = new Ice(*this);
	return (newMateria);
}

void	Ice::use(ICharacter &target)
{
	std::cout << CYAN << "* shoots an ice bolt at " << target.getName() << " *" << NORMAL << std::endl;
}
