/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 09:01:03 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/04 09:01:27 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "Regular WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const& cp)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = cp;
}

WrongCat::~WrongCat()
{
	std::cout << "Regular WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const& cp)
{
	std::cout << "WrongCat assignments copy operator called" << std::endl;
	if (this != &cp)
		*this = cp;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "I'm a WrongCat, I don't have to say meaow, right ?" << std::endl;
}