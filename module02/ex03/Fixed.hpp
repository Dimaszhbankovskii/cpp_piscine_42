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

	Fixed	operator ++ ();
	Fixed	operator -- ();
	Fixed	operator ++ (int unused);
	Fixed	operator -- (int unused);

	int 	getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;

	static Fixed		&min(Fixed &f1, Fixed &f2);
	static Fixed		&max(Fixed &f1, Fixed &f2);
	static Fixed const	&min(Fixed const &f1, Fixed const &f2);
	static Fixed const	&max(Fixed const &f1, Fixed const &f2);

private:
	int					_fixedPointValue;
	static int const	_fractionalBit;
};

std::ostream	& operator << (std::ostream &outstream, Fixed const &fixed);

#endif