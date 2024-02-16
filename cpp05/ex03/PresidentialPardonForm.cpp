/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:56:23 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/16 08:21:10 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

std::string	PresidentialPardonForm::getTarget() const{
	return (_target);
}

void		PresidentialPardonForm::execute(Bureaucrat const& cp) const{

	if (cp.getGrade() > this->getGrade())
		throw  signTooLow();
	if (this->getSign() == false)
		throw NotSigned();
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential Creation", 25, 5){
	std::cout << "Presidential default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential Creation", 25, 5){
	std::cout << "Presidential target constructor called" << std::endl;
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "Presidential default destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& cp): AForm(cp){
	std::cout << "Presidential copy constructor called" << std::endl;
	*this = cp;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& cp){
	std::cout << "presidential copy assignments operator called" << std::endl;
	if (this != &cp)
		this->_target = cp.getTarget();
	return (*this);
}
