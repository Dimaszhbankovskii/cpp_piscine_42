#include <iostream>
#include "../includes/iter.hpp"
#include "../includes/Awesome.hpp"

template<typename T>
void	printArray(T *pArray, size_t lenArray)
{
	for (size_t i = 0; i < lenArray; i++)
	{
		if (i == lenArray - 1)
			std::cout << pArray[i];
		else
			std::cout << pArray[i] << ", ";
	}
}

template<typename T>
void	increase(T &elem)
{
	elem += 10;
}

void	appendStr(std::string &str)
{
	str.append("XXX");
}

int	main()
{
	{
		char	charArray[] = {'a', '3', 's', 'o', 'N'};
		size_t	lenCharArray = sizeof(charArray) / sizeof(charArray[0]);

		std::cout << "before charArray: ";
		printArray(charArray, lenCharArray);
		std::cout << std::endl;

		::iter(charArray, lenCharArray, &::increase);

		std::cout << "after charArray: ";
		printArray(charArray, lenCharArray);
		std::cout << std::endl;
	}

	std::cout << "--------------------------------------------------" << std::endl;

	{
		int	intArray[] = {1, 3, 5, 10, -10};
		int	lenIntArray = sizeof(intArray) / sizeof(intArray[0]);

		std::cout << "before intArray: ";
		printArray(intArray, lenIntArray);
		std::cout << std::endl;

		::iter(intArray, lenIntArray, &::increase);

		std::cout << "after intArray: ";
		printArray(intArray, lenIntArray);
		std::cout << std::endl;
	}

	std::cout << "--------------------------------------------------" << std::endl;

	{
		std::string	strArray[] = {"string_1_", "string_2_", "string_3_"};
		size_t		lenStrArray = sizeof(strArray) / sizeof(strArray[0]);

		std::cout << "before strArray: ";
		printArray(strArray, lenStrArray);
		std::cout << std::endl;

		::iter(strArray, lenStrArray, &appendStr);

		std::cout << "after strArray: ";
		printArray(strArray, lenStrArray);
		std::cout << std::endl;
	}

	std::cout << "--------------------------------------------------" << std::endl;

	{
		int		tab[] = {0, 1, 2, 3, 4};
		Awesome	tab2[5];

		::iter(tab, 5, &print);
		::iter(tab2, 5, &print);
	}

	return (0);
}
