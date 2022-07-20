#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &newWeapon)
{
	this->_name = name;
	this->_weapon = &newWeapon;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	return ;
}

void	HumanA::setWeapon(Weapon &newWeapon)
{
	this->_weapon = &newWeapon;
	return ;
}
