#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
protected:
	std::string const	_name;
	bool				_isSigned;
	int const			_gradeToSign;
	int const			_gradeToExecute;

	void				_setName(std::string name);
	void				_setGradeToSign(int grade);
	void				_setGradeToExecute(int grade);

public:
	Form();
	Form(std::string const name, int gradeToSign, int gradeToExecute);
	Form(Form const &src);
	Form	&operator=(Form const &src);
	virtual	~Form();

	std::string const	&getName() const;
	bool const			&getIsSign() const;
	int	const			&getGradeToSign() const;
	int	const			&getGradeToExecute() const;

	void				beSigned(Bureaucrat const &bureaucrat);
	virtual void		execute(Bureaucrat const &executor) const = 0;

	class GradeTooHignException : public std::exception
	{
	public:
		virtual char const	*what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual char const	*what() const throw();
	};
	
	class UnsignedToExecuteException : public std::exception
	{
	public:
		virtual char const	*what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &outstream, Form const &form);

#endif