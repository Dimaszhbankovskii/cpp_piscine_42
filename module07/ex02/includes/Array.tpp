#ifndef ARRAY_TPP
# define ARRAY_TPP

# ifndef ARRAY_HPP
#  error Array.tpp should only be included from Array.hpp
# endif

template<typename T>
Array<T>::Array()
{
	std::cout << "Array Defaylt constructor without parametr called" << std::endl;
	this->_array = NULL;
	this->_size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "Array Default constructor called" << std::endl;
	this->_array = new T[n];
	this->_size = n;
}

template<typename T>
Array<T>::Array(Array<T> const &src)
{
	std::cout << "Array Copy constructor called" << std::endl;
	this->_array = NULL;
	*this = src;
}

template<typename T>
Array<T>	&Array<T>::operator=(Array<T> const &src)
{
	std::cout << "Array Copy assignment called" << std::endl;
	if (this == &src)
		return (*this);
	if (this->_array)
		delete [] this->_array;
	this->_array = new T[src._size];
	this->_size = src._size;
	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	std::cout << "Array Destructor called" << std::endl;
	if (this->_array)
		delete [] this->_array;
}

#endif

template<typename T>
T	&Array<T>::operator[](int const index) const
{
	if (index < 0 || index >= (int)this->_size)
		throw Array<T>::InvalidIndexArray();
	return (this->_array[index]);
}

template<typename T>
unsigned int	Array<T>::size() const
{
	return (this->_size);
}

template<typename T>
char const	*Array<T>::InvalidIndexArray::what() const throw()
{
	return ("Invalid index of array!");
}
