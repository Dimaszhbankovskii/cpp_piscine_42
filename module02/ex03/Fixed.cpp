#include "Fixed.hpp"

const int	Fixed::_fractionalBit = 8;

Fixed::Fixed() : _fixedPointValue(0)
{
}

Fixed::Fixed(int const intNum)
{
	this->_fixedPointValue = intNum << this->_fractionalBit;
}

Fixed::Fixed(float const floatNum)
{
	this->_fixedPointValue = (int)roundf(floatNum * (1 << this->_fractionalBit));
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed::~Fixed()
{
}

Fixed &	Fixed::operator = (Fixed const &src)
{
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

	res = Fixed(this->toFloat() * fixed.toFloat());
	return (res);
}

Fixed	Fixed::operator / (Fixed const &fixed) const
{
	Fixed	res;

	res = Fixed(this->toFloat() / fixed.toFloat());
	return (res);
}

Fixed	Fixed::operator ++ ()
{
	this->_fixedPointValue += 1;
	return (*this);
}

Fixed	Fixed::operator -- ()
{
	this->_fixedPointValue -= 1;
	return (*this);
}

Fixed	Fixed::operator ++ (__attribute__((unused)) int unused)
{
	Fixed	prev(*this);

	this->_fixedPointValue += 1;
	return (prev);
}

Fixed	Fixed::operator -- (__attribute__((unused)) int unused)
{
	Fixed	prev(*this);

	this->_fixedPointValue -= 1;
	return (prev);
}

int	Fixed::getRawBits() const
{
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	return (f1 < f2 ? f1 : f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	return (f1 > f2 ? f1 : f2);
}

Fixed const	&Fixed::min(Fixed const &f1, Fixed const &f2)
{
	return (f1 < f2 ? f1 : f2);
}

Fixed const	&Fixed::max(Fixed const &f1, Fixed const &f2)
{
	return (f1 > f2 ? f1 : f2);
}

std::ostream	& operator << (std::ostream &outstream, Fixed const &fixed)
{
	return (outstream << fixed.toFloat());
}
