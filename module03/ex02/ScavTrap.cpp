#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << VIOLET << "ScavTrap default constructor without parameter called" << NORMAL << std::endl;
	this->_name = "ScavTrap000";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string const name)
{
	std::cout << VIOLET << "ScavTrap default constructor called" << NORMAL << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << VIOLET << "ScavTrap copy constructor called" << NORMAL << std::endl;
	*this = src;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &src)
{
	std::cout << VIOLET << "ScavTrap copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << VIOLET << "ScavTrap destructor called" << NORMAL << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if (this->getHitPoints() <= 0)
	{
		std::cout << RED;
		std::cout << "ScavTrap " << this->getName() << " has no Hit Points. It is dead. It can't attack!!!";
		std::cout << NORMAL << std::endl;
		return ;
	}
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << RED;
		std::cout << "ScavTrap " << this->getName() << " has no Energy Points. It is discharged. It can't attack!!!";
		std::cout << NORMAL << std::endl;
		return ;
	}
	std::cout << GREEN << "ScavTrap " << this->getName() << " attacks " << target;
	std::cout << " , causing " << this->getAttackDamage() << " points of damage!" << NORMAL << std::endl;
	this->_energyPoints -= 1;
	return ;
}

void	ScavTrap::guardGate()
{
	if (this->getHitPoints() <= 0)
	{
		std::cout << RED;
		std::cout << "ScavTrap " << this->getName() << " has no Hit Points. It is dead. No Gate keeper mode!!!";
		std::cout << NORMAL << std::endl;
		return ;
	}
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << RED;
		std::cout << "ScavTrap " << this->getName() << " has no Energy Points. It is discharged. No Gate keeper mode!!!";
		std::cout << NORMAL << std::endl;
		return ;
	}
	std::cout << GREEN << "ScavTrap " << this->_name << " is in Gate keeper mode." << NORMAL << std::endl;
	this->_energyPoints -= 1;
	return ;
}

std::ostream& operator<<(std::ostream &outStream, ScavTrap const &scavtrap)
{
	outStream << "ScavTrap: " << scavtrap.getName();
	outStream << "\nHit Points: " << scavtrap.getHitPoints();
	outStream << "\nEnergy Points: " << scavtrap.getEnergyPoints();
	outStream << "\nAttack Damage: " << scavtrap.getAttackDamage();
	return (outStream);
}
