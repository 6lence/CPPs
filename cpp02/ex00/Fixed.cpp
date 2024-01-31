/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:58:39 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/30 10:18:49 by mescobar         ###   ########.fr       */
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

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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

Fixed&	Fixed::operator=(Fixed const& raw)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &raw)
		this->_number = raw.getRawBits();
	return (*this);
}