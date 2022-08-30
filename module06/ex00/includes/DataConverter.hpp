#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <iomanip>
# include <cstring>
# include <cstdlib>
# include <cmath>
# include <climits>
# include <cfloat>

class DataConverter
{
private:
	int		_precision;
	double	_doubleValue;

	int		_definePrecision(char *input);

	void	_checkInputData(char *input);

	char	_convertDoubleToChar(double value);
	int		_convertDoubleToInt(double value);
	double	_convertDoubleToFloat(double value);
	double	_convertDoubleToDouble(double value);

	void	_processChar(double value);
	void	_processInt(double value);
	void	_processFloat(double value);
	void	_processDouble(double value);

public:
	DataConverter();
	DataConverter(DataConverter const &src);
	DataConverter	&operator=(DataConverter const &src);
	~DataConverter();

	void	processInputData(char *input);

	class EmptyInputArgs : public std::exception
	{
		virtual char const	*what() const throw();
	};

	class InvalidInputArgs : public std::exception
	{
		virtual char const	*what() const throw();
	};

	class InvalidAmountInputArgs : public std::exception
	{
		virtual char const	*what() const throw();
	};

	class ImpossibleValueException : public std::exception
	{
		virtual char const	*what() const throw();
	};

	class NonDisplayableValueException : public std::exception
	{
		virtual char const	*what() const throw();
	};
};

#endif