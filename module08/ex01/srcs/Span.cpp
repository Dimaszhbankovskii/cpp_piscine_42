#include "Span.hpp"

Span::Span()
{
	std::cout << GREEN << "Span Default constructor without parametr called" << NORMAL << std::endl;
	this->_maxSizeVector = 0;
}

Span::Span(unsigned int N)
{
	std::cout << GREEN << "Span Default constructor called" << NORMAL << std::endl;
	this->_maxSizeVector = N;
}

Span::Span(Span const &src)
{
	std::cout << GREEN << "Span Copy constructor called" << NORMAL << std::endl;
	*this = src;
}

Span	&Span::operator=(Span const &src)
{
	std::cout << GREEN << "Span Copy assignment called" << NORMAL << std::endl;
	if (this == &src)
		return (*this);
	this->_maxSizeVector = src._maxSizeVector;
	this->_intVector = src._intVector;
	return (*this);
}

Span::~Span()
{
	std::cout << GREEN << "Span Destructor called" << NORMAL << std::endl;
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

void	Span::addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>	tmpVector(begin, end);

	if ((this->_maxSizeVector - this->_intVector.size()) < tmpVector.size())
		throw Span::NoSpaceInVectorForIter();
	std::copy(tmpVector.begin(), tmpVector.end(), std::back_inserter(this->_intVector));
}

unsigned int	Span::shortestSpan()
{
	if (this->_intVector.size() < 2)
		throw Span::FewElementsForCalculationsExcexption();

	std::vector<int>	tmpVector = this->_intVector;
	unsigned int		result, tmpMin;

	std::sort(tmpVector.begin(), tmpVector.end());

	result = tmpVector[1] - tmpVector[0];
	for (std::vector<int>::iterator iter = tmpVector.begin() + 1; iter != tmpVector.end() - 1; ++iter)
	{
		tmpMin = *(iter + 1) - *iter;
		if (result > tmpMin)
			result = tmpMin;
		if (!result)
			return (result);
	}
	return (result);
}

unsigned int	Span::longestSpan()
{
	if (this->_intVector.size() < 2)
		throw Span::FewElementsForCalculationsExcexption();

	std::vector<int>	tmpVector = this->_intVector;

	std::sort(tmpVector.begin(), tmpVector.end());
	
	unsigned int	result = *(tmpVector.end() - 1) - *tmpVector.begin();

	return (result);
}

char const	*Span::InvalidIndexVectorException::what() const throw()
{
	return ("Invalid index in vector container!!!");
}

char const	*Span::VectorIsFullException::what() const throw()
{
	return ("Container is full. New item cannot be added!!!");
}

char const	*Span::FewElementsForCalculationsExcexption::what() const throw()
{
	return ("There are few elements in the container to calculate!!!");
}

char const	*Span::NoSpaceInVectorForIter::what() const throw()
{
	return ("Container has no space to fill with iterator!!!");
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
