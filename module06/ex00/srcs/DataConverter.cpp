#include "../includes/DataConverter.hpp"

DataConverter::DataConverter()
{
	this->_precision = 0;
	this->_doubleValue = 0;
}

DataConverter::DataConverter(DataConverter const &src)
{
	*this = src;
}

DataConverter	&DataConverter::operator=(DataConverter const &src)
{
	if (this == &src)
		return (*this);
	this->_precision = src._precision;
	this->_doubleValue = src._doubleValue;
	return (*this);
}

DataConverter::~DataConverter()
{
}

void	DataConverter::processInputData(char *input)
{
	if (!*input)
		throw DataConverter::EmptyInputArgs();
	this->_precision = this->_definePrecision(input);
	this->_doubleValue = atof(input);
	this->_checkInputData(input);
	this->_processChar(this->_doubleValue);
	this->_processInt(this->_doubleValue);
	this->_processFloat(this->_doubleValue);
	this->_processDouble(this->_doubleValue);
}

int	DataConverter::_definePrecision(char *input)
{
	unsigned int	numCharBeforePoint;
	unsigned int	numCharAfterPoinr;

	numCharBeforePoint = 0;
	while (input && input[numCharBeforePoint] && input[numCharBeforePoint] != '.')
		numCharBeforePoint++;
	numCharAfterPoinr = numCharBeforePoint + 1;
	while (input && input[numCharAfterPoinr] && isdigit(input[numCharAfterPoinr]))
		numCharAfterPoinr++;
	numCharAfterPoinr -= numCharBeforePoint;

	if (strlen(input) == numCharBeforePoint || numCharAfterPoinr == 1)
		return (1);
	else
		return (numCharAfterPoinr - 1);
	
}

void	DataConverter::_checkInputData(char *input)
{
	char	*tmp = input;

	while (tmp && *tmp && isspace(*tmp))
		tmp++;
	if (!this->_doubleValue && !isdigit(*tmp))
		throw DataConverter::InvalidInputArgs();
}

char	DataConverter::_convertDoubleToChar(double value)
{
	char	charValue;

	if (std::isnan(value))
		throw DataConverter::ImpossibleValueException();
	if (value < static_cast<double>(CHAR_MIN) || value > static_cast<double>(CHAR_MAX))
		throw DataConverter::ImpossibleValueException();
	charValue = static_cast<char>(value);
	if (!std::isprint(charValue))
		throw DataConverter::NonDisplayableValueException();
	return (charValue);
}

int	DataConverter::_convertDoubleToInt(double value)
{
	if (std::isnan(value) || std::isinf(value))
		throw DataConverter::ImpossibleValueException();
	if (value < static_cast<double>(INT_MIN) || value > static_cast<double>(INT_MAX))
		throw DataConverter::ImpossibleValueException();
	return (static_cast<int>(value));
}

double	DataConverter::_convertDoubleToFloat(double value)
{
	if ((value < static_cast<double>(-FLT_MAX - 1) || value > static_cast<double>(FLT_MAX)) && \
	!std::isinf(value))
		throw DataConverter::ImpossibleValueException();
	return (static_cast<double>(value));
}

double	DataConverter::_convertDoubleToDouble(double value)
{
	if ((static_cast<long double>(value) < static_cast<long double>(-LDBL_MAX - 1) || \
	static_cast<long double>(value) > static_cast<long double>(LDBL_MAX)) && !std::isinf(value))
		throw DataConverter::ImpossibleValueException();
	return (static_cast<double>(value));
}

void	DataConverter::_processChar(double value)
{
	char	charValue;

	try
	{
		std::cout << "char: ";
		charValue = this->_convertDoubleToChar(value);
		std::cout << "'" << charValue << "'" << std::endl;
	}
	catch(const std::exception &exc)
	{
		std::cout << exc.what() << std::endl;
	}
}

void	DataConverter::_processInt(double value)
{
	try
	{
		std::cout << "int: ";
		std::cout << this->_convertDoubleToInt(value) << std::endl;
	}
	catch(const std::exception &exc)
	{
		std::cout << exc.what() << std::endl;
	}
}

void	DataConverter::_processFloat(double value)
{
	double	floatValue;

	try
	{
		std::cout << "float: ";
		floatValue = this->_convertDoubleToFloat(value);
		std::cout << std::setprecision(this->_precision) << std::fixed << floatValue << "f" << std::endl;
	}
	catch(const std::exception &exc)
	{
		std::cout << exc.what() << std::endl;
	}
}

void	DataConverter::_processDouble(double value)
{
	try
	{
		std::cout << "double: ";
		std::cout << std::setprecision(this->_precision) << std::fixed << this->_convertDoubleToDouble(value) << std::endl;
	}
	catch(const std::exception &exc)
	{
		std::cout << exc.what() << std::endl;
	}
}

char const	*DataConverter::EmptyInputArgs::what() const throw()
{
	return ("Empty input args");
}

char const	*DataConverter::InvalidInputArgs::what() const throw()
{
	return ("Invalid input args");
}

char const	*DataConverter::InvalidAmountInputArgs::what() const throw()
{
	return ("Invalid amount input args");
}

char const	*DataConverter::ImpossibleValueException::what() const throw()
{
	return ("imposible");
}

char const	*DataConverter::NonDisplayableValueException::what() const throw()
{
	return ("Non displayable");
}
