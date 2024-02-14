/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar42@student.42perpigna    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:45:43 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/14 20:57:03 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main(){

	Bureaucrat	tmp("between", 75);
	Bureaucrat	low("low", 151);
	Bureaucrat	high("high", 0);

	std::cout << std::endl;

	std::cout << "Test 1 between 1 - 150" << std::endl;
	// ----------------Test  1: between 1 - 150
	try{
		if (tmp.getGrade() > 150)
			throw (Bureaucrat::GradeTooLow());
		else if (tmp.getGrade() < 1)
			throw (Bureaucrat::GradeTooHigh());
	}
	catch(Bureaucrat::GradeTooHigh& a){
		a.GradeTooHighException();
	}
	catch(Bureaucrat::GradeTooLow&	a){
		a.GradeTooLowException();
	}
	std::cout << std::endl;

	std::cout << "Test 2: bigger than 150" << std::endl;
	// ----------------Test  2: bigger than 150
	try{
		if (low.getGrade() > 150)
			throw (Bureaucrat::GradeTooLow());
		else if (low.getGrade() < 1)
			throw (Bureaucrat::GradeTooHigh());
	}
	catch(Bureaucrat::GradeTooHigh& a){
		a.GradeTooHighException();
	}
	catch(Bureaucrat::GradeTooLow&	a){
		a.GradeTooLowException();
	}
	std::cout << std::endl;

	std::cout << "Test 3: Lower than 1" << std::endl;
	// ----------------Test  3: lower than 1
	try{
		if (high.getGrade() > 150)
			throw (Bureaucrat::GradeTooLow());
		else if (high.getGrade() < 1)
			throw (Bureaucrat::GradeTooHigh());
	}
	catch(Bureaucrat::GradeTooHigh& a){
		a.GradeTooHighException();
	}
	catch(Bureaucrat::GradeTooLow&	a){
		a.GradeTooLowException();
	}

	
	std::cout << tmp << std::endl;
	std::cout << low << std::endl;
	std::cout << high << std::endl;

	std::cout << std::endl;

	return (0);
}