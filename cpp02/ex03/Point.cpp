/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:36:34 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/31 16:56:55 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(0), _y(0){}

Point::Point(float const a, float const b): _x(a), _y(b){}

Point::Point(Fixed const a, Fixed const b): _x(a), _y(b){}

Point::Point(Point const& cp)
{
	*this = cp;
}

Point::~Point(void){}

Point&	Point::operator=(Point const& pt)
{
	if (this != &pt)
	{
		(Fixed) this->_x = pt.getX();
		(Fixed) this->_y = pt.getY();
	}
	return *this;
}

Fixed	Point::getX() const
{
	return (_x);
}

Fixed	Point::getY() const
{
	return (_y);
}

std::ostream& operator<<(std::ostream& o, Point const& point)
{
	o << "(" << point.getX().toFloat() << ", " << point.getY().toFloat() << ")";
	return o;
}