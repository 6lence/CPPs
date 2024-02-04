/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:29:13 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/04 08:37:49 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Regular Cat constructor called" << std::endl;
}

Cat::Cat(Cat const& cp)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cp;
}

Cat::~Cat()
{
	std::cout << "Regular Cat destructor called" << std::endl;
}

Cat& Cat::operator=(Cat const& cp)
{
	std::cout << "Cat assignments copy operator called" << std::endl;
	if (this != &cp)
		*this = cp;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "I'm a Cat, I have to say meaow, right ?" << std::endl;
}