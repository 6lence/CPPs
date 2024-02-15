/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:45:43 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/15 12:25:47 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"

int main(){

	Bureaucrat	one("one", 1);
	Bureaucrat	two("two", 75);
	Bureaucrat	three("three", 150);

	PresidentialPardonForm	zach("Quentin");
	RobotomyRequestForm		ro("Quentin");
	ShrubberyCreationForm	sch("Quentin");

	std::cout << std::endl;

	sch.execute(one);
	sch.execute(two);
	sch.execute(three);

	ro.execute(one);
	ro.execute(two);
	ro.execute(three);

	zach.execute(one);
	zach.execute(two);
	zach.execute(three);

	std::cout << std::endl;

	return (0);
}