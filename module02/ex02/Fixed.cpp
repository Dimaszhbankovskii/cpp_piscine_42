#include "Fixed.hpp"

const int	Fixed::_fractionalBit = 8;

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const intNum)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = intNum << this->_fractionalBit;
}

Fixed::Fixed(float const floatNum)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = (int)roundf(floatNum * (1 << this->_fractionalBit));
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator = (Fixed const & src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &src)
		return (*this);
	this->_fixedPointValue = src.getRawBits();
	return (*this);
}

bool	Fixed::operator < (Fixed const &fixed) const
{
	return (this->_fixedPointValue < fixed.getRawBits());
}

bool	Fixed::operator > (Fixed const &fixed) const
{
	return (this->_fixedPointValue > fixed.getRawBits());
}

bool	Fixed::operator <= (Fixed const &fixed) const
{
	return (this->_fixedPointValue <= fixed.getRawBits());
}

bool	Fixed::operator >= (Fixed const &fixed) const
{
	return (this->_fixedPointValue >= fixed.getRawBits());
}

bool	Fixed::operator == (Fixed const &fixed) const
{
	return (this->_fixedPointValue == fixed.getRawBits());
}

bool	Fixed::operator != (Fixed const &fixed) const
{
	return (this->_fixedPointValue != fixed.getRawBits());
}

Fixed	Fixed::operator + (Fixed const &fixed) const
{
	Fixed	res;

	res.setRawBits(this->_fixedPointValue + fixed.getRawBits());
	return (res);
}

Fixed	Fixed::operator - (Fixed const &fixed) const
{
	Fixed	res;

	res.setRawBits(this->_fixedPointValue - fixed.getRawBits());
	return (res);
}

Fixed	Fixed::operator * (Fixed const &fixed) const
{
	Fixed	res;

	res.setRawBits(this->_fixedPointValue * fixed.getRawBits());
	return (res);
}

Fixed	Fixed::operator / (Fixed const &fixed) const
{
	Fixed	res;

	res.setRawBits(this->_fixedPointValue / fixed.getRawBits());
	return (res);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

float	Fixed::toFloat() const
{
	return ((float)this->_fixedPointValue / (float)(1 << this->_fractionalBit));
}

int	Fixed::toInt() const
{
	return (this->_fixedPointValue >> this->_fractionalBit);
}

std::ostream	& operator << (std::ostream &outstream, Fixed const &fixed)
{
	return (outstream << fixed.toFloat());
}
