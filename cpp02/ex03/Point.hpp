/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:15:59 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/31 16:56:01 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;

	public:
		Point(void);
		Point(float const a, float const b);
		Point(Fixed const a, Fixed const b);
		Point(Point const& cp);
		~Point(void);
		Point& operator=(Point const& pt);

		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

std::ostream&	operator<<(std::ostream& o, Point const& point);

#endif