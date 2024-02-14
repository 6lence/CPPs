/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar42@student.42perpigna    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:14:48 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/14 20:59:39 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string	ShrubberyCreationForm::getTarget() const{
	return (_target);
}

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery Creation", 145, 137){
	std::cout << "Shru default constructor called" << std::endl;
}

void	ShrubberyCreationForm::exec(Bureaucrat const* cp){

	std::fstream	fd;

	if (cp->getGrade() > this->getGrade())
		throw  signTooLow();
	if (this->getSign() == false)
		throw NotSigned();

	fd.open(getTarget().append("_shrubbery"));
	if (!fd.is_open())
	{
		std::cerr << "file creation error: " << std::endl;
		return ;
	}
		fd << "            .        +          .      .          ." << std::endl;
		fd << "     .            _        .                    ." << std::endl;
		fd << "  ,              /;-._,-.____        ,-----.__" << std::endl;
		fd << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._," << std::endl;
		fd << '  `                 /   _|`"=:_::.`.);  \ __/ /' << std::endl;
		fd << "                      ,    `./  \:. `.   )==-'  ." << std::endl;
		fd << "    .      ., ,-=-.  ,\, +#./`   \:.  / /           ." << std::endl;
		fd << ".           \/:/`-' , ,\ '` ` `   ): , /_  -o" << std::endl;
		fd << "       .    /:+- - + +- : :- + + -:'  /(o-) \)     ." << std::endl;
		fd << "  .      ,=':  \    ` `/` ' , , ,:' `'--'.--'---._/`7" << std::endl;
		fd << "   `.   (    \: \,-._` ` + '\, ,'   _,--._,---':.__/" << std::endl;
		fd << "              \:  `  X` _| _,\/'   .-'" << std::endl;
		fd << ".               ':._:`\____  /:'  /      .           ." << std::endl;
		fd << "                    \::.  :\/:'  /              +" << std::endl;
		fd << "   .                 `.:.  /:'  }      ." << std::endl;
		fd << "           .           ):_(:;   \           ." << std::endl;
		fd << "                      /:. _/ ,  |" << std::endl;
		fd << "                   . (|::.     ,`                  ." << std::endl;
		fd << "     .                |::.    {\\" << std::endl;
		fd << "                      |::.\  \ `." << std::endl;
		fd << "                      |:::(\    |" << std::endl;
		fd << "              O       |:::/{ }  |                  (o" << std::endl;
		fd << "               )  ___/#\::`/ (O '==._____   O, (O  /`" << std::endl;
		fd << "          ~~~w/w~'~~,\` `:/,-(~`'~~~~~~~~'~o~\~/~w|/~" << std::endl;
	fd.close();

	std::cout << "Shru target constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& cp){
	std::cout << "Shru copy constructor called" << std::endl;
	*this = cp;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "Shru default destructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& cp){
	std::cout << "Shru copy assignments operator called" << std::endl;
	if (this != &cp){
		this->_target = cp.getTarget();
	}
	return (*this);
}