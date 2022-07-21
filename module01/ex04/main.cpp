#include <iostream>
#include <fstream>

static int	replaceData(std::string fileName, std::string s1, std::string s2, std::string replaceFileName)
{
	std::ifstream	inputFile;
	std::ofstream	outputFile;
	std::string		content;
	std::size_t		position;
	std::size_t		i = 0;

	inputFile.open(fileName.c_str());
	if (!inputFile.is_open())
	{
		std::cout << "Can't open input file!" << std::endl;
		return (1);
	}
	if (inputFile.peek() == std::ifstream::traits_type::eof())
	{
		std::cout << "Input file is empty!" << std::endl;
		inputFile.close();
		return (1);
	}
	outputFile.open(replaceFileName.c_str());
	if (!outputFile.is_open())
	{
		inputFile.close();
		std::cout << "Can't open output file!" << std::endl;
		return (1);
	}
	std::getline(inputFile, content, '\0');
	position = content.find(s1);
	while (position != std::string::npos)
	{
		while (i != position)
			outputFile << content[i++];
		outputFile << s2;
		i += s1.size();
		position = content.find(s1, i);  
	}
	while (i != content.size())
		outputFile << content[i++];
	inputFile.close();
	outputFile.close();
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
