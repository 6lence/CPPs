/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar42@student.42perpigna    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:55:20 by mescobar          #+#    #+#             */
/*   Updated: 2024/03/12 17:14:28 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(char *exp): _exp(exp){
	calc();
}

RPN::RPN(RPN const& cp){
	*this = cp;
}

RPN::~RPN(){}

RPN&	RPN::operator=(RPN const& cp){
	if (this != &cp){
		this->_exp = cp._exp;
	}
	return (*this);
}

bool	RPN::expression_validity(){
	
	int	len;

	if (_exp.empty())
		return false;

	len = _exp.length();
	for(int i = 0; i < len; i++){
		if (_exp[i] != ' ' && _exp[i] != '+'
			&& _exp[i] != '-' && _exp[i] != '/'
			&& _exp[i] != '*' && !isdigit(_exp[i]))
			return (false);
		if (i == 0 && !isdigit(_exp[i]))
			return (false);
		if (i == len - 1 && _exp[i] != '+'	&& _exp[i] != '-' 
			&& _exp[i] != '/' && _exp[i] != '*')
			return (false);
		if (i - 1 > 0 && i + 1 < len && !isspace(_exp[i]) && (_exp[i - 1] != ' ' || _exp[i + 1] != ' '))
			return (false);
		}
	return (true);
}

void	RPN::calc(){
	if(!expression_validity()){
		std::cerr << "Error" << std::endl;
		exit(EXIT_FAILURE);
	}
	
	float res;
	for (int i = 0; _exp[i]; i++){
		if (isspace(_exp[i]))
			continue;
		if (isdigit(_exp[i])){
			_stack.push(_exp[i] - 48);
			continue;
		}
		res = _stack.top();
		_stack.pop();
		switch (_exp[i])
		{
			case '*':
				res = _stack.top() * res;
				break;
			case '/':
				res = _stack.top() / res;
				break;
			case '+':
				res = _stack.top() + res;
				break;
			case '-':
				res = _stack.top() - res;
				break;
		}
		_stack.pop();
		_stack.push(res);
	}
	std::cout << "Result: " << res << std::endl;
}