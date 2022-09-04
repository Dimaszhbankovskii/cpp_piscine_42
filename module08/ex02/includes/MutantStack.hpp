#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(MutantStack<T> const &src);
	MutantStack<T>	&operator=(MutantStack<T> const &src);
	~MutantStack();

	typedef typename std::stack<T>::container_type::iterator			iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;

	iterator			begin();
	iterator			end();
	reverse_iterator	rbegin();
	reverse_iterator	rend();
};

# include "MutantStack.tpp"

#endif