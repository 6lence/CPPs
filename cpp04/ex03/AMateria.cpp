/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 08:28:58 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/12 14:06:51 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type)
{
	std::cout << "AMateria type assign constructor called" << std::endl;
	_type = type;
}

AMateria::AMateria(AMateria const& cp)
{
	std::cout << "Amateria copy constructor called" << std::endl;
	*this = cp;
}

AMateria::~AMateria()
{
	std::cout << "AMateria default destructor called" << std::endl;
}

AMateria&	AMateria::operator=(AMateria const& cp)
{
	std::cout << "AMateria default copy assignments operator called" << std::endl;
	if (this != &cp)
		*this = cp;
	return (*this);
}

std::string const&	AMateria::getType() const
{
	return (_type);
}

AMateria*	AMateria::clone() const{
	return 0;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "You cannot use against " << target.getName() << std::endl;
}