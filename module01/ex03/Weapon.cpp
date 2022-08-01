#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
}

std::string const	&Weapon::getType() const
{
	const std::string	&typeRef = this->_type;
	return (typeRef);
}

void	Weapon::setType(std::string newType)
{
	this->_type = newType;
	return ;
}
