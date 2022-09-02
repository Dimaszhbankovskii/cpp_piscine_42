#include <ctime>
#include <cstdlib>
#include <iomanip>
#include "../includes/Array.hpp"

#define MIN_SIZE 5
#define MAX_VAL 750

int	main()
{

	std::cout << "------------------------------------------------------------\n";
	std::cout << "---------------------     TEST 1    ------------------------\n";
	std::cout << "------------------------------------------------------------" << std::endl;
	{
		Array<int> numbers(MIN_SIZE);
		int	*mirror = new int[MIN_SIZE];

		std::cout << "------------------------------------------------------------" << std::endl;

		std::srand(std::time(NULL));
		for (int i = 0; i < MIN_SIZE; i++)
		{
			int const	value = std::rand();
			
			numbers[i] = value;
			mirror[i] = value;
		}

		for (int i = 0; i < MIN_SIZE; i++)
		{
			std::cout << "numbers[" << i << "] = " << std::setw(12) << numbers[i] << "   |   ";
			std::cout << "mirror[" << i << "] = " << std::setw(12) << mirror[i] << std::endl;
		}
		std::cout << "------------------------------------------------------------" << std::endl;

		delete [] mirror;
	}

	std::cout << "------------------------------------------------------------\n";
	std::cout << "---------------------     TEST 2    ------------------------\n";
	std::cout << "------------------------------------------------------------" << std::endl;


	Array<int> numbers(MAX_VAL);
	int	*mirror = new int[MAX_VAL];

	std::cout << "------------------------------------------------------------" << std::endl;

	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		int const	value = rand();
		
		numbers[i] = value;
		mirror[i] = value;
	}

	std::cout << "------------------------------------------------------------" << std::endl;

    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

	std::cout << "------------------------------------------------------------" << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return (1);
        }
    }

	std::cout << "------------------------------------------------------------" << std::endl;

    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	std::cout << "------------------------------------------------------------" << std::endl;

    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < (int)numbers.size(); i++)
    {
        numbers[i] = std::rand();
    }

	std::cout << "------------------------------------------------------------" << std::endl;

    delete [] mirror;

	std::cout << "------------------------------------------------------------" << std::endl;

	return 0;
}
