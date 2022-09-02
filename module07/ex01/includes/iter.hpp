#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	iter(T *pArray, size_t lenArray, void (*prtFunc)(T &))
{
	for (size_t i = 0; i < lenArray; i++)
		prtFunc(pArray[i]);
}

#endif