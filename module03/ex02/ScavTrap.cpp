#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor without parameter called" << std::endl;
	this->_name = "ScavTrap000";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if (this->getHitPoints() <= 0)
	{
		std::cout << "ScavTrap " << this->getName() << " has no Hit Points. It is dead." << std::endl;
		return ;
	}
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << "ScavTrap " << this->getName() << " has no Energy Points. It is discharged." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName() << " attacks " << target;
	std::cout << " , causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->_energyPoints -= 1;
	return ;
}

void	ScavTrap::guardGate()
{
	if (this->getHitPoints() <= 0)
	{
		std::cout << "ScavTrap " << this->getName() << " has no Hit Points. It is dead." << std::endl;
		return ;
	}
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << "ScavTrap " << this->getName() << " has no Energy Points. It is discharged." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode." << std::endl;
	this->_energyPoints -= 1;
	return ;
}

std::ostream	& operator << (std::ostream &outStream, ScavTrap const &scavtrap)
{
	outStream << "ScavTrap: " << scavtrap.getName();
	outStream << "\nHit Points: " << scavtrap.getHitPoints();
	outStream << "\nEnergy Points: " << scavtrap.getEnergyPoints();
	outStream << "\nAttack Damage: " << scavtrap.getAttackDamage();
	return (outStream);
}
