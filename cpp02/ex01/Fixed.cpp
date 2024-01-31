/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:58:39 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/31 16:03:02 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_number = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& nb)
{
	*this = nb;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(int const nb)
{
	std::cout << "Int constructor called" << std::endl;
	_number = nb << _bits;
}

Fixed::Fixed(float const nb)
{
	std::cout << "Float constructor called" << std::endl;
	_number = roundf(nb * (1 << _bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const& raw)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &raw)
		this->_number = raw.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
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
