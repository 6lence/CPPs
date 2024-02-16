/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:14:48 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/16 08:34:41 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string	ShrubberyCreationForm::getTarget() const{
	return (_target);
}

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery Creation", 145, 137){
	std::cout << "Shru default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string cp): AForm("Shrubbery Creation", 145, 137){
	std::cout << "Shru assign target constructor called" << std::endl;
	_target = cp;
}

void	ShrubberyCreationForm::execute(Bureaucrat const& cp) const{

	std::ofstream	fd;

	if (cp.getGrade() > this->getGrade())
		throw  signTooLow();
	if (this->getSign() == false)
		throw NotSigned();

	fd.open((this->_target + "_shrubbery").c_str());
	if (!fd.is_open())
	{
		std::cerr << "file creation error: " << std::endl;
		return ;
	}
		fd << "            .        +          .      .          ." << std::endl;
		fd << "     .            _        .                    ." << std::endl;
		fd << "  ,              /;-._,-.____        ,-----.__" << std::endl;
		fd << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._," << std::endl;
		fd << "  `                 /   _|`'=:_::.`.);  \\ __/ /" << std::endl;
		fd << "                      ,    `./  \\:. `.   )==-'  ." << std::endl;
		fd << "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           ." << std::endl;
		fd << ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o" << std::endl;
		fd << "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     ." << std::endl;
		fd << "  .      ,=':  \\    ` `/` ' , , ,:' `'--'.--'---._/`7" << std::endl;
		fd << "   `.   (    \\: \\,-._` ` + '\\, ,'   _,--._,---':.__/" << std::endl;
		fd << "              \\:  `  X` _| _,\\/'   .-'" << std::endl;
		fd << ".               ':._:`\\____  /:'  /      .           ." << std::endl;
		fd << "                    \\::.  :\\/:'  /              +" << std::endl;
		fd << "   .                 `.:.  /:'  }      ." << std::endl;
		fd << "           .           ):_(:;   \\           ." << std::endl;
		fd << "                      /:. _/ ,  |" << std::endl;
		fd << "                   . (|::.     ,`                  ." << std::endl;
		fd << "     .                |::.    {\\" << std::endl;
		fd << "                      |::.\\  \\ `." << std::endl;
		fd << "                      |:::(\\    |" << std::endl;
		fd << "              O       |:::/{ }  |                  (o" << std::endl;
		fd << "               )  ___/#\\::`/ (O '==._____   O, (O  /`" << std::endl;
		fd << "          ~~~w/w~'~~,\\` `:/,-(~`'~~~~~~~~'~o~\\~/~w|/~" << std::endl;
	fd.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& cp): AForm(cp){
	std::cout << "Shru copy constructor called" << std::endl;
	*this = cp;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "Shru default destructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& cp){
	std::cout << "Shru copy assignments operator called" << std::endl;
	if (this != &cp)
		this->_target = cp.getTarget();
	return (*this);
}