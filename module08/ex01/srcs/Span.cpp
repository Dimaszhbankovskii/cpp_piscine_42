#include "../includes/Span.hpp"

Span::Span()
{
	std::cout << "Span Default constructor without parametr called" << std::endl;
	this->_maxSizeVector = 0;
}

Span::Span(unsigned int N)
{
	std::cout << "Span Default constructor called" << std::endl;
	this->_maxSizeVector = N;
	// for (unsigned int i = 0; i < this->_sizeVector; i++)
	// 	this->_intVector[i] = 0;
}

Span::Span(Span const &src)
{
	std::cout << "Span Copy constructor called" << std::endl;
	*this = src;
}

Span	&Span::operator=(Span const &src)
{
	std::cout << "Span Copy assignment called" << std::endl;
	if (this == &src)
		return (*this);
	this->_maxSizeVector = src._maxSizeVector;
	this->_intVector = src._intVector;
	return (*this);
}

Span::~Span()
{
	std::cout << "Span Destructor called" << std::endl;
}

size_t	Span::getSizeVector() const
{
	return (this->_intVector.size());
}

int	const	&Span::getElemVector(unsigned int index) const
{
	if (index >= this->_intVector.size())
		throw Span::InvalidIndexVectorException();
	return (this->_intVector[index]);
}

void	Span::addNumber(int number)
{
	if (this->_intVector.size() == this->_maxSizeVector)
		throw Span::VectorIsFullException();
	this->_intVector.push_back(number);
}

// int	Span::shortestSpan()
// {
// 	if (this->_intVector.size())

// 	int	result;

// 	return (result);
// }

char const	*Span::InvalidIndexVectorException::what() const throw()
{
	return ("Invalid index in vector container!!!");
}

char const	*Span::VectorIsFullException::what() const throw()
{
	return ("Container is full. New item cannot be added!!!");
}

std::ostream	&operator<<(std::ostream &outstream, Span const &src)
{
	outstream << "Span( size = " << src.getSizeVector() << " )\n";
	outstream << "Span ==> intVector: ";
	for (unsigned int i = 0; i < src.getSizeVector(); i++)
	{
		if (i == src.getSizeVector() - 1)
			outstream << src.getElemVector(i);
		else
			outstream << src.getElemVector(i) << ", ";
	}
	return (outstream);
}
