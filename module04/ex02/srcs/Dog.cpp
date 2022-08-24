#include "../includes/Dog.hpp"

Dog::Dog()
{
	std::cout << BLUE << "Dog Default constructor called" << NORMAL << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const &src) : AAnimal(src)
{
	std::cout << BLUE << "Dog Copy constructor called" << NORMAL << std::endl;
	this->_brain = NULL;
	*this = src;
}

Dog& Dog::operator=(Dog const &src)
{
	std::cout << BLUE << "Dog Copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	this->_type = src.getType();
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain();
	*this->_brain = *src._brain;
	return (*this);
}

Dog::~Dog()
{
	std::cout << BLUE << "Dog Destructor called" << std::endl;
	delete this->_brain;
}

Brain	&Dog::getBrain() const
{
	return (*this->_brain);
}

void	Dog::makeSound() const
{
	std::cout << "** WOOF WOOF WOOF WOOF WOOF!!! **" << std::endl;
	return ;
}

void	Dog::showIdeaFromBrain(unsigned int index) const
{
	std::cout << "Animal: " << this->_type << " ==> Idea from brain ";
	std::cout << index << ": " << this->_brain->getIdeaByIndex(index) << std::endl;
	return ;
}

void	Dog::setIdeaInBrain(std::string idea, unsigned int index)
{
	this->_brain->setIdeaByIndex(idea, index);
	return ;
}

