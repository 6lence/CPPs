/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:56:09 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/14 13:46:20 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& cp){
	o << cp.getName() << ", bureaucrat grade " << cp.getGrade();
	return (o);
}

int		Bureaucrat::getGrade() const {
	return (_grade);
}

std::string	Bureaucrat::getName() const {
	return (_name);
}

Bureaucrat::Bureaucrat(){
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade){
	std::cout << "Bureaucrat assign values constructor called" << std::endl;	
}

Bureaucrat::Bureaucrat(Bureaucrat const& cp): _name(cp.getName()), _grade(cp.getGrade()){
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = cp;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat default destructor called" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& cp){
	if (this != &cp)
	{
		(std::string)this->_name = cp.getName();
		this->_grade = cp.getGrade();
	}
	return (*this);
}
