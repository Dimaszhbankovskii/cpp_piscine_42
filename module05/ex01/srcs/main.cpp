#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int	main()
{
	try
	{
		Bureaucrat	bureaucrat("Jack", 5);
		Form		form2B("2B", 20, 12);
		Form		form9K("9K", 2, 3);

		std::cout << "---------------------------------------------------------------------------" << std::endl;

		std::cout << bureaucrat << std::endl;
		std::cout << form2B << std::endl;
		std::cout << form9K << std::endl;

		std::cout << "---------------------------------------------------------------------------" << std::endl;

		bureaucrat.signForm(form2B);
		bureaucrat.signForm(form9K);

		std::cout << "---------------------------------------------------------------------------" << std::endl;

		bureaucrat.incrementGrade();
		bureaucrat.incrementGrade();
		bureaucrat.incrementGrade();

		std::cout << "---------------------------------------------------------------------------" << std::endl;

		std::cout << bureaucrat << std::endl;
		std::cout << form2B << std::endl;
		std::cout << form9K << std::endl;

		std::cout << "---------------------------------------------------------------------------" << std::endl;

		bureaucrat.signForm(form9K);

		std::cout << "---------------------------------------------------------------------------" << std::endl;

		std::cout << bureaucrat << std::endl;
		std::cout << form2B << std::endl;
		std::cout << form9K << std::endl;

		std::cout << "---------------------------------------------------------------------------" << std::endl;
	}
	catch(const std::exception& exc)
	{
		std::cout << exc.what() << std::endl;
	}

	std::cout << "---------------------------------------------------------------------------\n";
	std::cout << "-----------------------        Invalid Form       -------------------------\n";
	std::cout << "---------------------------------------------------------------------------" << std::endl;

	try
	{
		Bureaucrat	bureaucrat("Max", 15);
		Form		form3CC("3CC", -1, 12);

		std::cout << "---------------------------------------------------------------------------" << std::endl;

		std::cout << bureaucrat << std::endl;
		std::cout << form3CC << std::endl;

		std::cout << "---------------------------------------------------------------------------" << std::endl;

		bureaucrat.signForm(form3CC);

		std::cout << "---------------------------------------------------------------------------" << std::endl;
	}
	catch(const std::exception& exc)
	{
		std::cout << exc.what() << std::endl;
	}
	
	std::cout << "---------------------------------------------------------------------------\n";
	std::cout << "---------------------------------------------------------------------------" << std::endl;

	try
	{
		Bureaucrat	bureaucrat("Ink", 115);
		Form		formREC("3CC", 116, 151);

		std::cout << "---------------------------------------------------------------------------" << std::endl;

		std::cout << bureaucrat << std::endl;
		std::cout << formREC << std::endl;

		std::cout << "---------------------------------------------------------------------------" << std::endl;

		bureaucrat.signForm(formREC);

		std::cout << "---------------------------------------------------------------------------" << std::endl;
	}
	catch(const std::exception& exc)
	{
		std::cout << exc.what() << std::endl;
	}
	return (0);
}
