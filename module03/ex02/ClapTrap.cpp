#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << VIOLET << "ClapTrap default constructor without parameter called" << NORMAL << std::endl;
	this->_name = "ClapTrap000";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string const name)
{
	std::cout << VIOLET << "ClapTrap default constructor called" << NORMAL << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << VIOLET << "ClapTrap copy constructor called" << NORMAL << std::endl;
	*this = src;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &src)
{
	std::cout << VIOLET << "ClapTrap copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << VIOLET << "ClapTrap destructor called" << NORMAL << std::endl;
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
		std::cout << RED;
		std::cout << "ClapTrap " << this->getName() << " has no Hit Points. It is dead. It can't attack!!!";
		std::cout << NORMAL << std::endl;
		return ;
	}
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << RED;
		std::cout << "ClapTrap " << this->getName() << " has no Energy Points. It is discharged. It can't attack!!!";
		std::cout << NORMAL << std::endl;
		return ;
	}
	std::cout << BLUE << "ClapTrap " << this->getName() << " attacks " << target;
	std::cout << " , causing " << this->getAttackDamage() << " points of damage!" << NORMAL << std::endl;
	this->_energyPoints -= 1;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHitPoints() <= 0)
	{
		std::cout << RED;
		std::cout << "ClapTrap " << this->getName() << " has no Hit Points. It is dead.";
		std::cout << NORMAL << std::endl;
		return ;
	}
	std::cout << CYAN << "ClapTrap " << this->getName() << " take damage. ";
	std::cout << amount << " Hit Points were lost." << NORMAL << std::endl;
	if (this->_hitPoints >= amount)
		this->_hitPoints -= amount;
	else
		this->_hitPoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHitPoints() <= 0)
	{
		std::cout << RED;
		std::cout << "ClapTrap " << this->getName() << " has no Hit Points. It is dead. It can't be repaired!!!";
		std::cout << NORMAL << std::endl;
		return ;
	}
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << RED;
		std::cout << "ClapTrap " << this->getName() << " has no Energy Points. It is discharged. It can't be repaired!!!";
		std::cout << NORMAL << std::endl;
		return ;
	}
	std::cout << GREEN << "ClapTrap " << this->getName() << " was repaired. ";
	std::cout << amount << " Hit Points have been restored." << NORMAL << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints -= 1;
	return ;
}

std::ostream& operator<<(std::ostream &outStream, ClapTrap const &claptrap)
{
	outStream << "ClapTrap: " << claptrap.getName();
	outStream << "\nHit Points: " << claptrap.getHitPoints();
	outStream << "\nEnergy Points: " << claptrap.getEnergyPoints();
	outStream << "\nAttack Damage: " << claptrap.getAttackDamage();
	return (outStream);
}
