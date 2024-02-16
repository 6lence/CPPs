/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:45:43 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/16 09:16:04 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "Intern.hpp"

int main(){

	std::cout << "-----Test 1------" << std::endl;
	{
		Intern	f;
		AForm*	t = f.makeForm("Presidential pardon", "ton pere");
		if (t)
			delete t;
	}
	std::cout << "-----Test 2------" << std::endl;
	{
		Intern	f;
		AForm*	t = f.makeForm("Shrubbery creation", "ton pere");
		if (t)
			delete t;
	}
	std::cout << "-----Test 3------" << std::endl;
	{
		Intern	f;
		AForm*	t = f.makeForm("Robotomy request", "ton pere");
		if (t)
			delete t;
	}
	std::cout << "-----Test 4------" << std::endl;
	{
		Intern	f;
		AForm*	t = f.makeForm("apoidfuaslkjfhasgdfasg", "ton pere");
		if (t)
			delete t;
	}
	return (0);
}