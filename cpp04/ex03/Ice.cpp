/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 07:27:42 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/13 08:36:43 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
	std::cout << "Default Ice constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(Ice const& cp): AMateria() {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = cp;
}

Ice::~Ice(){
	std::cout << "Ice default destructor called" << std::endl;
}

Ice&	Ice::operator=(Ice const& cp){
	std::cout << "Ice copy assignments operator called" << std::endl;
	if (this != &cp)
		this->_type = cp.getType();
	return (*this);
}

AMateria*	Ice::clone() const{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<	std::endl;
}