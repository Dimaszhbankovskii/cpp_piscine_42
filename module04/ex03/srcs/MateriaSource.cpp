#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default constructor called" << std::endl;
	for (int i = 0; i < SIZE_LIB; i++)
		this->_materiaLib[i] = NULL;
	this->_numLearnedMateria = 0;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	*this = src;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &src)
{
	std::cout << "Character Copy assignment called" << std::endl;
	if (this == &src)
		return (*this);
	for (int i = 0; i < SIZE_LIB; i++)
	{
		if (this->_materiaLib[i])
		{
			delete this->_materiaLib[i];
			this->_materiaLib[i] = NULL;
		}
		if (src._materiaLib[i])
			this->_materiaLib[i] = src._materiaLib[i]->clone();
	}
	this->_numLearnedMateria = src._numLearnedMateria;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;
	for (int i = 0; i < SIZE_LIB; i++)
	{
		if (this->_materiaLib[i])
			delete this->_materiaLib[i];
	}
}

void	MateriaSource::learnMateria(AMateria *src)
{
	if (this->_numLearnedMateria >= SIZE_LIB)
		std::cout << "Can't learn a new materia. Library is full!!!" << std::endl;
	else
	{
		this->_materiaLib[this->_numLearnedMateria] = src->clone();
		this->_numLearnedMateria++;
		std::cout << "Materia " << src->getType() << " was learnt" << std::endl;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < SIZE_LIB && this->_materiaLib[i]; i++)
	{
		if (this->_materiaLib[i]->getType() == type)
			return (this->_materiaLib[i]->clone());
	}
	return (NULL);
}
