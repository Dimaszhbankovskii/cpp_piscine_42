#include "../includes/DataConverter.hpp"

int	main(int argc, char **argv)
{
	DataConverter	dataConverter;

	try
	{
		if (argc != 2)
			throw DataConverter::InvalidAmountInputArgs();
		dataConverter.processInputData(argv[1]);
	}
	catch(const std::exception &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	return (0);
}
