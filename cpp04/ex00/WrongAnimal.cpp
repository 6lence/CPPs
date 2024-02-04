/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 08:57:50 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/04 09:00:31 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){ std::cout << "Regular WrongAnimal constructor called" << std::endl; }

WrongAnimal::WrongAnimal( std::string type )
{
	std::cout << "Type WrongAnimal constructor called" << std::endl;
	_type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal const& cp)
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	*this = cp;
}

WrongAnimal::~WrongAnimal(){ std::cout << "Destructor WrongAnimal called" << std::endl;}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& cp)
{
	std::cout << "WrongAnimal copy assignments operator called" << std::endl;
	if (this != &cp)
		*this = cp;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Bah, comment dire, I'm every WrongAnimal, Idk what sound I have to make" << std::endl;
}