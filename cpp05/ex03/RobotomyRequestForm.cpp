/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:30:24 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/16 08:20:46 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

void	RobotomyRequestForm::execute(Bureaucrat const& cp) const{

	int nb = std::rand();

	if (cp.getGrade() > this->getGrade())
		throw  signTooLow();
	if (this->getSign() == false)
		throw NotSigned();
	std::cout << "Drrrrrrriiiiilllllllllingggggggg Nnnnnnooooiiiiiiiiiissseeeee" << std::endl;
	if (nb % 2 == 0)
		std::cout << "The target:" << this->getTarget() << "have been robotomyzed" << std::endl;
	else
		std::cout << "The robotomy failed" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const{
	return (_target);
}

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy Creation", 72, 45){
	std::cout << "Robotomy default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy Creation", 72, 45){
	std::cout << "Robotomy target constructor called" << std::endl;
	_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "Robotomy default destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& cp): AForm(cp){
	std::cout << "Robotomy copy constructor called" << std::endl;
	*this = cp;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& cp){
	std::cout << "Robotomy copy assignments operator called" << std::endl;
	if (this != &cp)
		this->_target = cp.getTarget();
	return (*this);
}
