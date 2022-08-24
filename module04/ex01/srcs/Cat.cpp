#include "../includes/Cat.hpp"

Cat::Cat()
{
	std::cout << GREEN << "Cat Default constructor called" << NORMAL << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << GREEN << "Cat Copy constructor called" << NORMAL << std::endl;
	this->_brain = NULL;
	*this = src;
}

Cat& Cat::operator=(Cat const &src)
{
	std::cout << GREEN << "Cat Copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	this->_type = src.getType();
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain();
	*this->_brain = *src._brain;
	return (*this);
}

Cat::~Cat()
{
	std::cout << GREEN << "Cat Destructor called" << std::endl;
	delete this->_brain;
}

Brain	&Cat::getBrain() const
{
	return (*this->_brain);
}

void	Cat::makeSound() const
{
	std::cout << "** MEOW MEOW MEOW MEOW MEOW!!! **" << std::endl;
	return ;
}

void	Cat::showIdeaFromBrain(unsigned int index) const
{
	std::cout << "Animal: " << this->_type << " ==> Idea from brain ";
	std::cout << index << ": " << this->_brain->getIdeaByIndex(index) << std::endl;
	return ;
}

void	Cat::setIdeaInBrain(std::string idea, unsigned int index)
{
	this->_brain->setIdeaByIndex(idea, index);
	return ;
}
