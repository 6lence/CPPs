/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 09:09:24 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/05 07:26:41 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Regular Brain constructor called" << std::endl;
}

Brain::Brain(Brain const& cp)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = cp;
}

Brain::~Brain()
{
	std::cout << "Regular Brain destructor called" << std::endl;
}

Brain&	Brain::operator=(Brain const& cp)
{
	std::cout << "Brain assignments copy operator called" << std::endl;
	if (this != &cp)
	{
		for(int i = 0; i < 100; i++)
			this->_ideas[i] = cp.getIdeas(i);
	}
	return (*this);
}

std::string	Brain::getIdeas(int i) const
{
	return (_ideas[i]);
}

void	Brain::setIdeas(int i, std::string Idea)
{
	_ideas[i] = Idea;
}