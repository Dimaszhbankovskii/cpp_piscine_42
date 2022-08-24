#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << CYAN << "Brain Default constructor called" << NORMAL << std::endl;
	for (int i = 0; i < SIZE; i++)
	{
		this->_ideas[i] = "idea";
	}
}

Brain::Brain(Brain const &src)
{
	std::cout << CYAN << "Brain Copy constructor called" << NORMAL << std::endl;
	*this = src;
}

Brain& Brain::operator=(Brain const &src)
{
	std::cout << CYAN << "Brain Copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	for (int i = 0; i < SIZE; i++)
		this->_ideas[i] = src._ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << CYAN << "Brain Destructor called" << NORMAL << std::endl;
}

std::string const	&Brain::getIdeaByIndex(unsigned int const index) const
{
	if (index < SIZE)
		return (this->_ideas[index]);
	else
		return (this->_ideas[0]);
}

void	Brain::setIdeaByIndex(std::string idea, unsigned int index)
{
	if (index < SIZE)
		this->_ideas[index] = idea;
	return ;
}
