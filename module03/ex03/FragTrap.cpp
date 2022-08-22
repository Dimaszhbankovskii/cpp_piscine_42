#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << VIOLET << "FragTrap default constructor without parameter called" << NORMAL << std::endl;
	this->_name = "FragTrap000";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string const name)
{
	std::cout << VIOLET << "FragTrap default constructor called" << NORMAL << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << VIOLET << "FragTrap copy constructor called" << NORMAL << std::endl;
	*this = src;
}

FragTrap& FragTrap::operator=(FragTrap const &src)
{
	std::cout << VIOLET << "FragTrap copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << VIOLET << "FragTrap destructor called" << NORMAL << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (this->getHitPoints() <= 0)
	{
		std::cout << RED;
		std::cout << "FragTrap " << this->getName() << " has no Hit Points. It is dead. It can't high five!!!";
		std::cout << NORMAL << std::endl;
		return ;
	}
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << RED;
		std::cout << "FragTrap " << this->getName() << " has no Energy Points. It is discharged. It can't high five!!!";
		std::cout << NORMAL << std::endl;
		return ;
	}
	std::cout << GREEN << "FragTrap " << this->getName() << ": Hey!!! Hive Five!!!" << NORMAL << std::endl;
	this->_energyPoints -= 1;
	return ;
}

std::ostream& operator<<(std::ostream &outStream, FragTrap const &fragtrap)
{
	outStream << "FragTrap: " << fragtrap.getName();
	outStream << "\nHit Points: " << fragtrap.getHitPoints();
	outStream << "\nEnergy Points: " << fragtrap.getEnergyPoints();
	outStream << "\nAttack Damage: " << fragtrap.getAttackDamage();
	return (outStream);
}
