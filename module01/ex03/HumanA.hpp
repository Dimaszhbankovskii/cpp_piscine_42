#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &newWeapon);
	~HumanA();

	void	attack() const;
	void	setWeapon(Weapon &newWeapon);

private:
	std::string	_name;
	Weapon		&_weapon;
};

#endif