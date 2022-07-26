#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(int const intNum);
	Fixed(float const floatNum);
	Fixed(Fixed const &src);
	~Fixed();

	Fixed	& operator = (Fixed const &src);

	bool	operator < (Fixed const &fixed) const;
	bool	operator > (Fixed const &fixed) const;
	bool	operator <= (Fixed const &fixed) const;
	bool	operator >= (Fixed const &fixed) const;
	bool	operator == (Fixed const &fixed) const;
	bool	operator != (Fixed const &fixed) const;

	Fixed	operator + (Fixed const &fixed) const;
	Fixed	operator - (Fixed const &fixed) const;
	Fixed	operator * (Fixed const &fixed) const;
	Fixed	operator / (Fixed const &fixed) const;

	int 	getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;

private:
	int					_fixedPointValue;
	static int const	_fractionalBit;
};

std::ostream	& operator << (std::ostream &outstream, Fixed const &fixed);

#endif