/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 07:24:05 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/12 14:18:37 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
	std::cout << "Default cure constructor called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(Cure const& cp): AMateria() {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = cp;
}

Cure::~Cure(){
	std::cout << "Cure default destructor called" << std::endl;
}

Cure&	Cure::operator=(Cure const& cp){
	std::cout << "Cure copy assignments operator called" << std::endl;
	if (this != &cp)
		this->_type = cp.getType();
	return (*this);
}

AMateria*	Cure::clone() const{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
}