#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

# ifndef MUTANTSTACK_HPP
#  error MutantStack.tpp should only be included from MutantStack.hpp
# endif

template<typename T>
MutantStack<T>::MutantStack()
{
	std::cout << "MutantStack Constructor called" << std::endl;
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &src) : MutantStack<T>::stack(src)
{
	std::cout << "MutantStack Copy Constructor called" << std::endl;
	*this = src;
}

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack<T> const &src)
{
	std::cout << "MutantStack Copy assignment called" << std::endl;
	if (this == &src)
		return (*this);
	this->c = src.c;
	return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "MutantStack destructor called" << std::endl;
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend()
{
	return (this->c.rend());
}

#endif