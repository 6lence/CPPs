/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:45:43 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/16 08:36:21 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

int main(){

	Bureaucrat	one("one", 1);
	Bureaucrat	two("two", 75);
	Bureaucrat	three("three", 150);

	PresidentialPardonForm	zach("Quentin");
	RobotomyRequestForm		ro("Quentin");
	ShrubberyCreationForm	sch("Quentin");

	std::cout << std::endl;

	std::cout << std::endl << "Shru:" << std::endl;
	try{
		sch.execute(one);
	}
	catch(AForm::signTooLow& tmp){
		tmp.printError();
	}
	catch(AForm::NotSigned& tmp){
		tmp.printError();
	}
	try{
		sch.execute(two);
	}
	catch(AForm::signTooLow& tmp){
		tmp.printError();
	}
	catch(AForm::NotSigned& tmp){
		tmp.printError();
	}
	try{
		sch.execute(three);
	}
	catch(AForm::signTooLow& tmp){
		tmp.printError();
	}
	catch(AForm::NotSigned& tmp){
		tmp.printError();
	}

	std::cout << std::endl << "Robotomy:" << std::endl;
	try{
		zach.execute(one);
	}
	catch(AForm::signTooLow& tmp){
		tmp.printError();
	}
	catch(AForm::NotSigned& tmp){
		tmp.printError();
	}
	try{
		zach.execute(two);
	}
	catch(AForm::signTooLow& tmp){
		tmp.printError();
	}
	catch(AForm::NotSigned& tmp){
		tmp.printError();
	}
	try{
		zach.execute(three);
	}
	catch(AForm::signTooLow& tmp){
		tmp.printError();
	}
	catch(AForm::NotSigned& tmp){
		tmp.printError();
	}
	
	std::cout << std::endl << "Presidential:" << std::endl;
	try{
		ro.execute(one);
	}
	catch(AForm::signTooLow& tmp){
		tmp.printError();
	}
	catch(AForm::NotSigned& tmp){
		tmp.printError();
	}
	try{
		ro.execute(two);
	}
	catch(AForm::signTooLow& tmp){
		tmp.printError();
	}
	catch(AForm::NotSigned& tmp){
		tmp.printError();
	}
	try{
		ro.execute(three);
	}
	catch(AForm::signTooLow& tmp){
		tmp.printError();
	}
	catch(AForm::NotSigned& tmp){
		tmp.printError();
	}

	std::cout << std::endl;

	return (0);
}