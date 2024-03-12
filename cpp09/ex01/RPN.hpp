/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar42@student.42perpigna    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:24:43 by mescobar          #+#    #+#             */
/*   Updated: 2024/03/12 16:38:21 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"
#include "stack"
#include "string"
#include "algorithm"

class RPN{
	private:
		std::string		_exp;
		std::stack<int>	_stack;
		RPN();

	public:
		RPN(char *exp);
		RPN(RPN const& cp);
		~RPN();
		RPN&	operator=(RPN const& cp);

		void	calc();
		bool	expression_validity();
};