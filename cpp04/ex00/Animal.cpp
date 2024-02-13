/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:13:19 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/13 10:10:57 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){ std::cout << "Regular Animal constructor called" << std::endl; }

Animal::Animal(std::string type)
{
	std::cout << "Type Animal constructor called" << std::endl;
	_type = type;
}

Animal::Animal(Animal const& cp)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = cp;
}

Animal::~Animal(){ std::cout << "Destructor Animal called" << std::endl;}

Animal&	Animal::operator=(Animal const& cp)
{
	std::cout << "Animal copy assignments operator called" << std::endl;
	if (this != &cp)
		this->_type = cp.getType();
	return (*this);
}

std::string	Animal::getType() const
{
	return (_type);
}

void	Animal::makeSound() const
{
	std::cout << "Bah, comment dire, I'm every animal, Idk what sound I have to make" << std::endl;
}