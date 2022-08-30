#include "../includes/Data.hpp"
#include <stdint.h>

uintptr_t	serialize(Data *prt)
{
	return (reinterpret_cast<uintptr_t>(prt));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data	structData = {'F', 10, "test string"};
	Data	*prtData = &structData;
	Data	*newPrtData;
	uintptr_t	rawData;

	std::cout << "----------------------------------------\n";
	std::cout << "Before serialize Data:\n";
	std::cout << "prtData = " << prtData << "\n";
	std::cout << "charValue = " << prtData->charValue << "\n";
	std::cout << "intValue = " << prtData->intValue << "\n";
	std::cout << "stringValue = " << prtData->stringValue << "\n";	
	std::cout << "----------------------------------------" << std::endl;

	rawData = serialize(prtData);

	std::cout << "value rawData = " << rawData << std::endl;

	newPrtData = deserialize(rawData);

	std::cout << "----------------------------------------\n";
	std::cout << "After deserialize Data:\n";
	std::cout << "prtData = " << prtData << "\n";
	std::cout << "newPrtData = " << newPrtData << "\n";
	std::cout << "charValue = " << newPrtData->charValue << "\n";
	std::cout << "intValue = " << newPrtData->intValue << "\n";
	std::cout << "stringValue = " << newPrtData->stringValue << "\n";	
	std::cout << "----------------------------------------" << std::endl;

	return (0);
}
