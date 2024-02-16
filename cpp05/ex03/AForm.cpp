/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar42@student.42perpigna    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:20:14 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/14 20:07:20 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

void	AForm::signAForm(Bureaucrat const& cp){
	if (this->getSign() == true)
		std::cout << cp.getName() << " signed " << this->getName() << std::endl;
	else
		std::cout << cp.getName() << " couldn't sign " << this->getName() << std::endl;
}

void	AForm::beSigned(Bureaucrat const& cp){
	try{
		if (cp.getGrade() > this->getGrade())
		{
			this->_signed = false;
			throw(Bureaucrat::GradeTooLow());
		}
		else
			this->_signed = true;
	}
	catch(Bureaucrat::GradeTooLow& tmp){
		tmp.GradeTooLowException();
	}
}

std::ostream&	operator<<(std::ostream& o, AForm const& cp){
	o << cp.getName() << ", AForm grade " << cp.getGrade() << " is " << cp.getSign();
	return (o);
}

bool	AForm::getSign() const{
	return (_signed);
}

int			AForm::getGrade() const{
	return (_grade);
}

std::string	AForm::getName() const{
	return (_name);
}

AForm::AForm(): _grade(150){
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string name, bool sign, int grade): _name(name), _grade(grade){
	std::cout << "AForm assign values constructor called" << std::endl;
	_signed = sign;
}

AForm::AForm(AForm const& cp): _grade(cp.getGrade()){
	*this = cp;
}

AForm&	AForm::operator=(AForm const& cp){
	if (this != &cp)
		this->_signed = cp.getSign();
	return (*this);
}

AForm::~AForm(){
	std::cout << "AForm default destructor called" << std::endl;
}