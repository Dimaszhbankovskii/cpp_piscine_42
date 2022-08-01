#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &newWeapon) : _weapon(newWeapon)
{
	this->_name = name;
}

HumanA::~HumanA()
{
}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
	return ;
}

void	HumanA::setWeapon(Weapon &newWeapon)
{
	this->_weapon = newWeapon;
	return ;
}
