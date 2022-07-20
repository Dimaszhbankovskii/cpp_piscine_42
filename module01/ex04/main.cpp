#include <iostream>
#include <fstream>

static int	replaceData(std::string fileName, std::string s1, std::string s2, std::string replaceFileName)
{
	std::ifstream	inputFile;
	std::ofstream	outputFile;

	inputFile.open(fileName.c_str());
	if (!inputFile.is_open())
	{
		std::cout << "Can't open input file!" << std::endl;
		return (1);
	}
	outputFile.open(replaceFileName.c_str());
	if (!outputFile.is_open())
	{
		inputFile.close();
		std::cout << "Can't open output file!" << std::endl;
		return (1);
	}
	
	
	// if (inputFile.is_open() && outputFile.is_open())
	// 	std::cout << "Files are open!" << std::endl;
	(void) s1;
	(void) s2;
	return (0);
}

int	main(int argc, char **argv)
{
	std::string	fileName, s1, s2, replaceFileName;

	if (argc != 4)
	{
		std::cout << "Invalid number of arguments!" << std::endl;
		return (1);
	}
	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	replaceFileName = fileName;
	replaceFileName.append(".replace");
	return (replaceData(fileName, s1, s2, replaceFileName));
}
