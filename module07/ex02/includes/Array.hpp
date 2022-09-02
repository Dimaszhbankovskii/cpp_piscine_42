#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
private:
	T				*_array;
	unsigned int	_size;

public:
	Array();
	Array(unsigned int n);
	Array(Array<T> const &src);
	Array<T>	&operator=(Array<T> const &src);
	~Array();

	T	&operator[](int const index) const;

	unsigned int size() const;

	class	InvalidIndexArray : public std::exception
	{
		virtual char const	*what() const throw();
	};
};

# include "Array.tpp"

#endif