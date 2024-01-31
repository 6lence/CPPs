/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:58:39 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/31 16:02:34 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_number = 0;
}

Fixed::Fixed(Fixed const& nb)
{
	*this = nb;
}

Fixed::Fixed(int const nb)
{
	_number = nb << _bits;
}

Fixed::Fixed(float const nb)
{
	_number = roundf(nb * (1 << _bits));
}

Fixed::~Fixed(){}

Fixed&	Fixed::operator=(Fixed const& raw)
{
	if (this != &raw)
		this->_number = raw.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (_number);
}

void	Fixed::setRawBits(const int raw)
{
	_number = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_number / (1 << _bits));
}

int		Fixed::toInt(void) const
{
	return (_number >> _bits);
}

std::ostream&	operator<<(std::ostream& o, Fixed const& nb)
{
	o << nb.toFloat();
	return (o);
}

bool	Fixed::operator<(Fixed const& pt) const
{
	if (_number < pt.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>(Fixed const& pt) const
{
	if (_number > pt.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=(Fixed const& pt) const
{
	if (_number >= pt.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=(Fixed const& pt) const
{
	if (_number <= pt.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==(Fixed const& pt) const
{
	if (_number == pt.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=(Fixed const& pt) const
{
	if (_number != pt.getRawBits())
		return true;
	return false;
}

Fixed&	Fixed::max(Fixed& pt1, Fixed& pt2)
{
	if (pt1.operator>(pt2))
		return (pt1);
	return(pt2);
}

Fixed const&	Fixed::max(Fixed const& pt1, Fixed const& pt2)
{
	if (pt1.operator>(pt2))
		return (pt1);
	return (pt2);
}

Fixed&	Fixed::min(Fixed& pt1, Fixed& pt2)
{
	if (pt1.operator<(pt2))
		return (pt1);
	return (pt2);
}

Fixed const&	Fixed::min(Fixed const& pt1, Fixed const& pt2)
{
	if (pt1.operator<(pt2))
		return (pt1);
	return (pt2);
}

Fixed	Fixed::operator--(int nb)
{
	Fixed	tmp(*this);

	tmp._number--;
	return (tmp);
}

Fixed	Fixed::operator++(int nb)
{
	Fixed	tmp(*this);

	tmp._number++;
	return (tmp);
}

Fixed&	Fixed::operator--(void)
{
	_number--;
	return (*this);
}

Fixed&	Fixed::operator++(void)
{
	_number++;
	return (*this);
}

Fixed	Fixed::operator+(Fixed const& pt) const
{
	return(Fixed(this->toFloat() + pt.toFloat()));
}

Fixed	Fixed::operator-(Fixed const& pt) const
{
	return(Fixed(this->toFloat() - pt.toFloat()));
}

Fixed	Fixed::operator*(Fixed const& pt) const
{
	return(Fixed(this->toFloat() * pt.toFloat()));
}

Fixed	Fixed::operator/(Fixed const& pt) const
{
	return(Fixed(this->toFloat() / pt.toFloat()));
}