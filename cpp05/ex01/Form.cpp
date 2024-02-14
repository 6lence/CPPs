/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:20:14 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/14 15:18:48 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void	Form::signForm(Bureaucrat const& cp){
	if (this->getSign() == true)
		std::cout << cp.getName() << " signed " << this->getName() << std::endl;
	else
		std::cout << cp.getName() << " couldn't sign " << this->getName() << std::endl;
}

void	Form::beSigned(Bureaucrat const& cp){
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
		tmp.GradeTooLowhException();
	}
}

std::ostream&	operator<<(std::ostream& o, Form const& cp){
	o << cp.getName() << ", form grade " << cp.getGrade() << " is " << cp.getSign();
	return (o);
}

bool	Form::getSign() const{
	return (_signed);
}

int			Form::getGrade() const{
	return (_grade);
}

std::string	Form::getName() const{
	return (_name);
}

Form::Form(): _grade(150){
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, bool sign, int grade): _name(name), _grade(grade){
	std::cout << "Form assign values constructor called" << std::endl;
	_signed = sign;
}

Form::Form(Form const& cp): _grade(cp.getGrade()){
	*this = cp;
}

Form&	Form::operator=(Form const& cp){
	if (this != &cp)
		this->_signed = cp.getSign();
	return (*this);
}

Form::~Form(){
	std::cout << "Form default destructor called" << std::endl;
}