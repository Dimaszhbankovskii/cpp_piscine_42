#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << VIOLET << "DiamondTrap default constructor without parameter called" << NORMAL << std::endl;
	ClapTrap::_name = "DiamondTrap000_clap_name";
	this->_name = "DiamondTrap000";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;	
}

DiamondTrap::DiamondTrap(std::string const name)
{
	std::cout << VIOLET << "DiamondTrap default constructor called" << NORMAL << std::endl;
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;	
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(), ScavTrap(src), FragTrap(src)
{
	std::cout << VIOLET << "DiamondTrap copy constructor called" << NORMAL << std::endl;
	*this = src;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &src)
{
	std::cout << VIOLET << "DiamondTrap copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	ClapTrap::_name = src.getName() + "_clap_name";
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << VIOLET << "DiamondTrap destructor called" << NORMAL << std::endl;
}

std::string	DiamondTrap::getName() const
{
	return (this->_name);
}

unsigned int	DiamondTrap::getHitPoints() const
{
	return (this->_hitPoints);
}

unsigned int	DiamondTrap::getEnergyPoints() const
{
	return (this->_energyPoints);
}

unsigned int	DiamondTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}

void	DiamondTrap::whoAmI() const
{
	std::cout << BLUE << "*** Who am I??? ***\n";
	std::cout << "DiamondTrap: " << this->_name;
	std::cout << "\nClapTrap: " << ClapTrap::_name << NORMAL << std::endl;
}

std::ostream& operator<<(std::ostream &outStream, DiamondTrap const &diamondtrap)
{
	outStream << "DiamondTrap: " << diamondtrap.getName();
	outStream << "\nHit Points: " << diamondtrap.getHitPoints();
	outStream << "\nEnergy Points: " << diamondtrap.getEnergyPoints();
	outStream << "\nAttack Damage: " << diamondtrap.getAttackDamage();
	return (outStream);
}
