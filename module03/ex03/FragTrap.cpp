#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor without parameter called" << std::endl;
	this->_name = "FragTrap000";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (this->getHitPoints() <= 0)
	{
		std::cout << "FragTrap " << this->getName() << " has no Hit Points. It is dead." << std::endl;
		return ;
	}
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << "FragTrap " << this->getName() << " has no Energy Points. It is discharged." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->getName() << ": Hey!!! Hive Five!!!" << std::endl;
	this->_energyPoints -= 1;
	return ;
}

std::ostream	& operator << (std::ostream &outStream, FragTrap const &fragtrap)
{
	outStream << "FragTrap: " << fragtrap.getName();
	outStream << "\nHit Points: " << fragtrap.getHitPoints();
	outStream << "\nEnergy Points: " << fragtrap.getEnergyPoints();
	outStream << "\nAttack Damage: " << fragtrap.getAttackDamage();
	return (outStream);
}
