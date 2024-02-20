/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:35:16 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/20 19:14:49 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
}

Span::Span(unsigned int nb): _len(nb){
}

Span::Span(Span const& cp){
	*this = cp;
}

Span::~Span(){
}

Span&	Span::operator=(Span const& cp){
	if (this != &cp){
		this->_len = cp._len;
		this->_tab.clear();
		std::copy(cp._tab.begin(), cp._tab.end(), std::back_inserter(this->_tab));
	}
	return (*this);
}

void	Span::addNumber(int nb){
	if (this->_tab.size() >= this->_len)
		throw(AlreadyFilled());
	this->_tab.push_back(nb);
}

void	Span::addNumber_iterator(int beg, int end){
	if (this->_tab.size() >= this->_len)
		throw(AlreadyFilled());
	while (beg < end)
		this->_tab.push_back(beg++);
}

int		Span::shortestSpan(){

	if (this->_tab.size() < 2)
		throw(NotEnoughElements());

	std::list<int>::const_iterator	i;
	std::list<int>::const_iterator	j;

	int	min = *std::max_element(this->_tab.begin(), this->_tab.end());
	for (i = _tab.begin(); i != _tab.end(); ++i)
	{
		for (j = _tab.begin(); j != _tab.end(); ++j){
			if (j == i)
				continue;
			if (std::abs(*i - *j) < min)
				min = std::abs(*i - *j);
		}
	}
	return (min);
}

int	Span::longestSpan(){
	if (this->_tab.size() < 2)
		throw(NotEnoughElements());
	return (*std::max_element(this->_tab.begin(), this->_tab.end()) - *std::min_element(this->_tab.begin(), this->_tab.end()));
}