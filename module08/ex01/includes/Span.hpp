#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
private:
	unsigned int		_maxSizeVector;
	std::vector<int>	_intVector;

public:
    Span();
	Span(unsigned int N);
	Span(Span const &src);
	Span	&operator=(Span const &src);
	~Span();

	size_t		getSizeVector() const;
	int	const	&getElemVector(unsigned int index) const;

	void		addNumber(int number);
	// int			shortestSpan();
	// int			longestSpan();

	class InvalidIndexVectorException : public std::exception
	{
		virtual char const	*what() const throw();
	};

	class VectorIsFullException : public std::exception
	{
		virtual char const	*what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &outstream, Span const &src);

#endif