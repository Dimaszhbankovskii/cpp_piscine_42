#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor without parameter called" << std::endl;
	this->_name = "ClapTrap000";
}

ClapTrap::ClapTrap(std::string const name) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_name = name;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap	& ClapTrap::operator = (ClapTrap const &src)
{
	std::cout << "ClapTrap copy assignment called" << std::endl;
	if (this == &src)
		return (*this);
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
	return (*this);
}

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints() const
{
	return (this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints() const
{
	return (this->_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->getHitPoints() <= 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has no Hit Points. It is dead." << std::endl;
		return ;
	}
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has no Energy Points. It is discharged." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " attacks " << target;
	std::cout << " , causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->_energyPoints -= 1;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHitPoints() <= 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has no Hit Points. It is dead." << std::endl;
		return ;
	}
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has no Energy Points. It is discharged." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " take damage. ";
	std::cout << amount << " Hit Points were lost." << std::endl;
	if (this->_hitPoints >= amount)
		this->_hitPoints -= amount;
	else
		this->_hitPoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHitPoints() <= 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has no Hit Points. It is dead." << std::endl;
		return ;
	}
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has no Energy Points. It is discharged." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " was repaired. ";
	std::cout << amount << " Hit Points have been restored." << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints -= 1;
	return ;
}

std::ostream	& operator << (std::ostream &outStream, ClapTrap const &claptrap)
{
	outStream << "ClapTrap: " << claptrap.getName();
	outStream << "\nHit Points: " << claptrap.getHitPoints();
	outStream << "\nEnergy Points: " << claptrap.getEnergyPoints();
	outStream << "\nAttack Damage: " << claptrap.getAttackDamage();
	return (outStream);
}
