/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:05:37 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/31 09:46:17 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include "iostream"
#include "cmath"

class Fixed
{
	private:
		int			_number;
		static const int	_bits = 8;
	
	public:
		Fixed();
		Fixed(int const nb);
		Fixed(float const nb);
		Fixed(Fixed const& nb);
		~Fixed();
		Fixed	&operator = (Fixed const& nb);

		int		getRawBits(void)const;
		void	setRawBits(int const raw);
		float 	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator << (std::ostream& o, Fixed const& nb);

#endif
