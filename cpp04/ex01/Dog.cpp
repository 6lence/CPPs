/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:23:14 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/04 12:03:49 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Regular Dog constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(Dog const& cp)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = cp;
}

Dog&	Dog::operator=(Dog const& cp)
{
	std::cout << "Dog copy assignments operator called" << std::endl;
	if (this != &cp)
	{
		if (this->_brain)
		{
			delete this->_brain;
			this->_brain = new Brain(*cp.getBrain());
		}
		*this = cp;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

void	Dog::makeSound() const
{
	std::cout << "Wouf ! 😄" << std::endl;
}

Brain*	Dog::getBrain() const
{
	return _brain;
}

void	Dog::setIdeas(std::string Idea)
{
	for(int i = 0; i < 100; i++)
		_brain->setIdeas(i, Idea);
}