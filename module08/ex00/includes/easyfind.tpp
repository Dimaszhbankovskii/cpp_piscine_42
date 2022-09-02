#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include "easyfind.hpp"

# ifndef EASYFIND_HPP
#  error easyfind.tpp should only be included from easyfind.hpp
# endif

template<typename T>
typename T::iterator	easyfind(T &container, int integer)
{
	typename T::iterator	it = std::find(container.begin(), container.end(), integer);

	if (it == container.end())
		throw NoEnrtyException();
	return (it);
};

#endif