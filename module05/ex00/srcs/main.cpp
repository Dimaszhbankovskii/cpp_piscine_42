#include "../includes/Bureaucrat.hpp"

int	main()
{
	try
	{
		std::cout << "--------------------------------------------------\n";
		std::cout << WHITE << ">> Initialization Bureaucrat - Grade 10\n" << NORMAL;
		std::cout << "--------------------------------------------------" << std::endl;

		Bureaucrat	bureaucratDalas("Dalas", 10);
		
		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << bureaucratDalas << std::endl;
		std::cout << "--------------------------------------------------" << std::endl;
		for (int i = 0; i < 5; i++)
			bureaucratDalas.decrementGrade();
		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << bureaucratDalas << std::endl;
		std::cout << "--------------------------------------------------" << std::endl;
		for (int i = 0; i < 12; i++)
			bureaucratDalas.incrementGrade();
		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << bureaucratDalas << std::endl;
		std::cout << "--------------------------------------------------" << std::endl;
	}
	catch(const std::exception &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	std::cout << "--------------------------------------------------\n";
	std::cout << "--------------------------------------------------" << std::endl;

	try
	{
		std::cout << "--------------------------------------------------\n";
		std::cout << WHITE << ">> Initialization Bureaucrat - Grade 1\n" << NORMAL;
		std::cout << "--------------------------------------------------" << std::endl;

		Bureaucrat	bureaucratGribabas("Gribabas", 1);
		
		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << bureaucratGribabas << std::endl;
		bureaucratGribabas.decrementGrade();
		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << bureaucratGribabas << std::endl;
		bureaucratGribabas.incrementGrade();
		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << bureaucratGribabas << std::endl;
		bureaucratGribabas.incrementGrade();
		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << bureaucratGribabas << std::endl;
		bureaucratGribabas.incrementGrade();
		std::cout << "--------------------------------------------------" << std::endl;
	}
	catch(const std::exception &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	std::cout << "--------------------------------------------------\n";
	std::cout << "--------------------------------------------------" << std::endl;

	try
	{
		std::cout << "--------------------------------------------------\n";
		std::cout << WHITE << ">> Initialization Bureaucrat - Grade 0\n" << NORMAL;
		std::cout << "--------------------------------------------------" << std::endl;

		Bureaucrat	bureaucratGangi("Gangi", 0);

		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << bureaucratGangi << std::endl;
		bureaucratGangi.decrementGrade();
		std::cout << "--------------------------------------------------" << std::endl;
	}
	catch(const std::exception &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	std::cout << "--------------------------------------------------\n";
	std::cout << "--------------------------------------------------" << std::endl;

	try
	{
		std::cout << "--------------------------------------------------\n";
		std::cout << WHITE << ">> Initialization Bureaucrat - Grade 151\n" << NORMAL;
		std::cout << "--------------------------------------------------" << std::endl;

		Bureaucrat	bureaucratTrinit("Trinit", 151);
		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << bureaucratTrinit << std::endl;
		bureaucratTrinit.decrementGrade();
		std::cout << "--------------------------------------------------" << std::endl;
	}
	catch(const std::exception &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	std::cout << "--------------------------------------------------\n";
	std::cout << "--------------------------------------------------" << std::endl;

	try
	{
		std::cout << "--------------------------------------------------\n";
		std::cout << WHITE << ">> Initialization Bureaucrat - Grade 150\n" << NORMAL;
		std::cout << "--------------------------------------------------" << std::endl;

		Bureaucrat	bureaucratJack("Jack", 150);
		
		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << bureaucratJack << std::endl;
		bureaucratJack.incrementGrade();
		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << bureaucratJack << std::endl;
		bureaucratJack.decrementGrade();
		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << bureaucratJack << std::endl;
		bureaucratJack.decrementGrade();
		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << bureaucratJack << std::endl;
		bureaucratJack.decrementGrade();
		std::cout << "--------------------------------------------------" << std::endl;
	}
	catch(const std::exception &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	return (0);
}
