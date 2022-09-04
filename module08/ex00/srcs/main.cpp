#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

#define SIZE_1 10
#define SIZE_2 15

int main()
{
	{
		std::vector<int> intVector1(SIZE_1);
		std::vector<int> intVector2(SIZE_2);

		for (size_t i = 0; i < intVector1.size(); i++)
			intVector1[i] = i;
		
		int value = 1;
		for (std::vector<int>::iterator it = intVector2.begin(); it != intVector2.end(); it++)
		{
			*it = value;
			value += 5;
		}

		std::cout << "intVector1( size = " << intVector1.size() << " ): ";
		for (size_t i = 0; i < intVector1.size(); i++)
		{
			if (i == intVector1.size() - 1)
				std::cout << intVector1[i] << std::endl;
			else
				std::cout << intVector1[i] << " ";
		}

		std::cout << "intVector2( size = " << intVector2.size() << " ): ";
		for (std::vector<int>::iterator it = intVector2.begin(); it != intVector2.end(); it++)
		{
			if (it == intVector2.end() - 1)
				std::cout << *it << std::endl;
			else
				std::cout << *it << " ";
		}

		std::cout << "---------------------------------------------------------------------------" << std::endl;

		std::vector<int>::iterator	iter;

		try
		{
			std::cout << "easyfind( intVector1, 5 ) ==> ";
			std::cout << *easyfind(intVector1, 5) << std::endl;
		}
		catch(const std::exception& exc)
		{
			std::cout << exc.what() << std::endl;
		}
		
		try
		{
			std::cout << "easyfind( intVector1, 11 ) ==> ";
			std::cout << *easyfind(intVector1, 11) << std::endl;
		}
		catch(const std::exception& exc)
		{
			std::cout << exc.what() << std::endl;
		}

		try
		{
			std::cout << "easyfind( intVector2, 41 ) ==> ";
			std::cout << *easyfind(intVector2, 41) << std::endl;
		}
		catch(const std::exception& exc)
		{
			std::cout << exc.what() << std::endl;
		}
		
		try
		{
			std::cout << "easyfind( intVector2, 100 ) ==> ";
			std::cout << *easyfind(intVector2, 100) << std::endl;
		}
		catch(const std::exception& exc)
		{
			std::cout << exc.what() << std::endl;
		}
	}

	std::cout << "---------------------------------------------------------------------------" << std::endl;
	std::cout << "---------------------------------------------------------------------------" << std::endl;

	{
		std::list<int>				intList1;
		std::list<int>				intList2;

		for (size_t i = 0; i < SIZE_1; i++)
			intList1.push_front(i);
		
		for (size_t i = 0; i < SIZE_2; i++)
			intList2.push_back(i * i);
		
		std::cout << "intList1( size = " << intList1.size() << " ): ";
		for (std::list<int>::iterator it = intList1.begin(); it != intList1.end(); ++it)
		{
			if (it == --intList1.end())
				std::cout << *it << std::endl;
			else
				std::cout << *it << " ";
		}

		std::cout << "intList2( size = " << intList2.size() << " ): ";
		for (std::list<int>::iterator it = intList2.begin(); it != intList2.end(); ++it)
		{
			if (it == --intList2.end())
				std::cout << *it << std::endl;
			else
				std::cout << *it << " ";
		}

		std::cout << "---------------------------------------------------------------------------" << std::endl;

		std::list<int>::iterator	iter;

		try
		{
			std::cout << "easyfind( intList1, 5 ) ==> ";
			std::cout << *easyfind(intList1, 5) << std::endl;
		}
		catch(const std::exception& exc)
		{
			std::cout << exc.what() << std::endl;
		}
		
		try
		{
			std::cout << "easyfind( intList1, 11 ) ==> ";
			std::cout << *easyfind(intList1, 11) << std::endl;
		}
		catch(const std::exception& exc)
		{
			std::cout << exc.what() << std::endl;
		}

		try
		{
			std::cout << "easyfind( intList2, 41 ) ==> ";
			std::cout << *easyfind(intList2, 41) << std::endl;
		}
		catch(const std::exception& exc)
		{
			std::cout << exc.what() << std::endl;
		}
		
		try
		{
			std::cout << "easyfind( intList2, 100 ) ==> ";
			std::cout << *easyfind(intList2, 100) << std::endl;
		}
		catch(const std::exception& exc)
		{
			std::cout << exc.what() << std::endl;
		}
	}

	return (0);
}
