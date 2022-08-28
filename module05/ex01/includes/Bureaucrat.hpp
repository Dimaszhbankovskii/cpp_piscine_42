#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

# define NORMAL	"\033[0m"
# define BLACK	"\033[1;30m"
# define RED	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define BLUE	"\033[1;34m"
# define VIOLET	"\033[1;35m"
# define CYAN	"\033[1;36m"
# define WHITE	"\033[1;37m"

# define MAX_GRADE 1
# define MIN_GRADE 150

class Form;

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;

	void				_setName(std::string name);

public:
	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat&	operator=(Bureaucrat const &src);
	~Bureaucrat();

	std::string const	getName() const;
	int					getGrade() const;
	void				incrementGrade();
	void				decrementGrade();
	void				signForm(Form &form) const;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual char const	*what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual char const	*what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &outstream, Bureaucrat const &src);

#endif