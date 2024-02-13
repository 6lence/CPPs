/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:29:13 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/13 09:42:35 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Regular Cat constructor called" << std::endl;
	_brain = new Brain();
}

Cat::Cat(Cat const& cp): Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cp;
}

Cat::~Cat()
{
	std::cout << "Regular Cat destructor called" << std::endl;
	delete _brain;
}

Cat& Cat::operator=(Cat const& cp)
{
	std::cout << "Cat assignments copy operator called" << std::endl;
	if (this != &cp)
	{
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain (*cp.getBrain());
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "I'm a Cat, I have to say meaow, right ?" << std::endl;
}

Brain*	Cat::getBrain() const
{
	return _brain;
}

void	Cat::setIdeas(std::string Idea)
{
	for(int i = 0; i < 100; i++)
		_brain->setIdeas(i, Idea);
}