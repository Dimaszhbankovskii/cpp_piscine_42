#include "../includes/Character.hpp"

Character::Character()
{
	std::cout << BLUE << "Character Default constructor without parametr called" << NORMAL << std::endl;
	this->_name = "NPC";
	for (int i = 0; i < SIZE_EQUIPMENT; i++)
		this->_materia[i] = NULL;
	this->_numEquipment = 0;
}

Character::Character(std::string const &name)
{
	std::cout << BLUE << "Character Default constructor called" << NORMAL << std::endl;
	this->_name = name;
	for (int i = 0; i < SIZE_EQUIPMENT; i++)
		this->_materia[i] = NULL;
	this->_numEquipment = 0;
}

Character::Character(Character const &src)
{
	std::cout << BLUE << "Character Copy constructor called" << NORMAL << std::endl;
	*this = src;
}

Character&	Character::operator=(Character const &src)
{
	std::cout << BLUE << "Character Copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	this->_name = src.getName();
	for (int i = 0; i < SIZE_EQUIPMENT; i++)
	{
		if (this->_materia[i])
		{
			delete this->_materia[i];
			this->_materia[i] = NULL;
		}
		if (src._materia[i])
			this->_materia[i] = src._materia[i]->clone();
	}
	this->_numEquipment = src._numEquipment;
	return (*this);
}

Character::~Character()
{
	std::cout << BLUE << "Character Destructor called" << NORMAL << std::endl;
	for (int i = 0; i < SIZE_EQUIPMENT; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
	}
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	if (!m)
		return ;
	if (this->_numEquipment < SIZE_EQUIPMENT)
	{
		for (int i = 0; i < SIZE_EQUIPMENT; i++)
		{
			if (!this->_materia[i])
			{
				this->_materia[i] = m;
				break ;
			}
		}
		this->_numEquipment++;
		std::cout << BLUE << this->getName() << " equipped a " << m->getType() << NORMAL << std::endl;
	}
	else
	{
		std::cout << RED << this->getName() << " could't equip a " << m->getType();
		std::cout << ". Full equipment!" << NORMAL << std::endl;
	}
	return ;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < SIZE_EQUIPMENT)
	{
		if (this->_numEquipment == 0)
			std::cout << RED << this->getName() << " has an empty inventory. Couldn't unequipped materia." << NORMAL << std::endl;
		else
		{
			this->_materia[idx] = NULL;
			this->_numEquipment--;
			std::cout << BLUE << this->getName() << " unequipped a materia" << NORMAL << std::endl;
		}
	}
	else
		std::cout << RED << this->getName() << " couldn't unequipped a materia. Invalid index of slot!" << NORMAL << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < SIZE_EQUIPMENT)
		this->_materia[idx]->use(target);
	else
		std::cout << RED << "Invalid index " << idx << " for action USE!!!" << NORMAL << std::endl;
}
