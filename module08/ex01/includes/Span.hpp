#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

# define NORMAL	"\033[0m"
# define BLACK	"\033[1;30m"
# define RED	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define BLUE	"\033[1;34m"
# define VIOLET	"\033[1;35m"
# define CYAN	"\033[1;36m"
# define WHITE	"\033[1;37m"

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

	void			addNumber(int number);
	void			addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

	class InvalidIndexVectorException : public std::exception
	{
		virtual char const	*what() const throw();
	};

	class VectorIsFullException : public std::exception
	{
		virtual char const	*what() const throw();
	};

	class FewElementsForCalculationsExcexption : public std::exception
	{
		virtual char const	*what() const throw();
	};

	class NoSpaceInVectorForIter : public std::exception
	{
		virtual char const	*what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &outstream, Span const &src);

#endif