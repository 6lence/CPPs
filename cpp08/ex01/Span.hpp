/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:12:02 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/20 19:11:16 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

class Span{
	private:
		unsigned int	_len;
		std::list<int>	_tab;
		Span();

	public:
		Span(unsigned int nb);
		Span(Span const& cp);
		~Span();
		Span&	operator=(Span const& cp);

		void	addNumber(int n);
		void	addNumber_iterator(int beg, int end);
		int		shortestSpan();
		int		longestSpan();

	class NotEnoughElements: public std::exception{
		public:
			virtual const char* what() const throw(){
				return ("Not enough elements in the list");
			}
	};

	class AlreadyFilled: public std::exception{
		public:
			virtual const char* what() const throw(){
				return ("List is already filled");
			}
	};
};
