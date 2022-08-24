#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << GREEN << "Cure Default constructor without parametr called" << NORMAL << std::endl;
}

Cure::Cure(Cure const &src) : AMateria(src)
{
	std::cout << GREEN << "Cure Copy constructor called" << NORMAL << std::endl;
	*this = src;
}

Cure&	Cure::operator=(Cure const &src)
{
	std::cout << GREEN << "Cure Copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	this->_type = src.getType();
	return (*this);
}

Cure::~Cure()
{
	std::cout << GREEN << "Cure Destructor called" << NORMAL << std::endl;
}

AMateria*	Cure::clone() const
{
	AMateria	*newMateria = new Cure(*this);
	return (newMateria);
}

void	Cure::use(ICharacter &target)
{
	std::cout << GREEN << "* heals " << target.getName() << "'s wounds *" << NORMAL << std::endl;
}
