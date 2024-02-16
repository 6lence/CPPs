/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 08:42:34 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/16 09:16:34 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

AForm*	Intern::makeForm(std::string name, std::string target) const{

	int i;

	for (i = 0; i < 3; i++){
		if (name == _form[i])
			break;
	}
	switch (i)
	{
		case 0:
			std::cout << "Inter created a form " << _form[0] << std::endl;
			return (new PresidentialPardonForm(target));
		case 1:
			std::cout << "Inter created a form " << _form[1] << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Inter created a form " << _form[2] << std::endl;
			return (new ShrubberyCreationForm(target));
		default:
			std::cout << "Intern couldnt create a form that doesn't exist !" << std::endl;
			return (NULL);
	}
}

Intern::Intern(){
	std::cout << "Intern default constructor called" << std::endl;
	_form[0] = "Presidential pardon";
	_form[1] = "Robotomy request";
	_form[2] = "Shrubbery Creation";
}

Intern::Intern(Intern const& cp){
	std::cout << "Intern copy contructor called" << std::endl;
	*this = cp;
}

Intern::~Intern(){
	std::cout << "Intern default destructor called" << std::endl;
}

Intern&	Intern::operator=(Intern const& cp){
	std::cout << "Intern copy assignments operator called" << std::endl;
	if (this != &cp)
		for (int i = 0; i < 3; i++)
		this->_form[i] = cp._form[i];
	return (*this);
}