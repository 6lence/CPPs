/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:23:14 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/13 09:38:36 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Regular Dog constructor called" << std::endl;
}

Dog::Dog(Dog const& cp): Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = cp;
}

Dog&	Dog::operator=(Dog const& cp)
{
	std::cout << "Dog copy assignments operator called" << std::endl;
	if (this != &cp)
		*this = cp;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Wouf ! 😄" << std::endl;
}