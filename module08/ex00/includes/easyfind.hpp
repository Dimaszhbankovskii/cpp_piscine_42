#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iterator>

class NoEnrtyException : public std::exception
{
	virtual char const	*what() const throw()
	{
		return ("The Element is not in the container!");
	}
};

template<typename T>
typename T::iterator	easyfind(T &container, int integer);

# include "easyfind.tpp"

#endif