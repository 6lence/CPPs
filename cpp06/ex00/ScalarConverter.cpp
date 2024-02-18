/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:27:18 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/18 10:24:40 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ScalarConverter::printChar(std::string nb){
	std::cout << "Char: ";
	for(int i = 0; nb[i]; i++){
		if(!std::isdigit(nb[i]) && nb.length() > 1){
			std::cout << "Non displayable" << std::endl;
			return ;
		}
	}
	if ((atoi(nb.c_str()) < 32 || atoi(nb.c_str())> 126)){
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	std::cout << static_cast<char>(nb[0]) << std::endl;
}

void	ScalarConverter::printInt(std::string nb){
	std::cout << "Int: ";
	for(int i = 0; nb[i]; i++){
		if ((nb[i] < '0' || nb[i] > '9') && nb[i] != '+' && nb[i] != '-')
		{
			std::cout << "Non displayable" << std::endl;
			return ;
		}
	}
	std::cout << std::atoi(nb.c_str()) << std::endl;
}

void	ScalarConverter::printFloat(std::string nb){
	bool point = 0;
	std::cout << "Float: ";
	if ((nb[nb.length() - 1] < '0' || nb[nb.length() - 1] > '9') && nb[nb.length() - 1] != 'f'){
		std::cout << "Non displayable" << std::endl;
		return;
	}
	for(int i = 0; i < nb.length() - 1; i++){
		if ((nb[i] < '0' || nb[i] > '9') && nb[i] != '.' && nb[i] != '+' && nb[i] != '-')
		{
			std::cout << "Non displayable" << std::endl;
			return ;
		}
		if (nb[i] == '.')
			point = 1;
	}
	std::cout << std::atoi(nb.c_str());
	if (point)
	{
		char const	*tmp = nb.c_str();
		while (*tmp != '.')
			*tmp++;
		while (*tmp && *tmp != 'f')
		{
			std::cout << *tmp;
			*tmp++;
		}
		std::cout << 'f' << std::endl;
	}
	else
		std::cout << ".0f" << std::endl;
}

void	ScalarConverter::printDouble(std::string nb){
	bool point = 0;
	std::cout << "Double: ";
	if ((nb[nb.length() - 1] < '0' || nb[nb.length() - 1] > '9') && nb[nb.length() - 1] != 'f'){
		std::cout << "Non displayable" << std::endl;
		return;
	}
	for(int i = 0; i < nb.length() - 1; i++){
		if ((nb[i] < '0' || nb[i] > '9') && nb[i] != '.' && nb[i] != '+' && nb[i] != '-')
		{
			std::cout << "Non displayable" << std::endl;
			return ;
		}
		if (nb[i] == '.')
			point = 1;
	}
	std::cout << std::atoi(nb.c_str());
	if (point)
	{
		char const	*tmp = nb.c_str();
		while (*tmp != '.')
			*tmp++;
		while (*tmp && *tmp != 'f')
		{
			std::cout << *tmp;
			*tmp++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << ".0" << std::endl;
}

void	ScalarConverter::convert(std::string nb){
	const std::string	imp[6] = {"-inff", "-inf", "+inff", "+inf", "nanf", "nan"};

	int	i;
	for (i = 0; i < 6; i++)
	{
		if (nb == imp[i])
			break ;
	}
	if (i < 6){
		std::cout << "Char: Impossible" << std::endl; 
		std::cout << "Int: Impossible" << std::endl; 
		if (i % 2 == 0)
		{
			std::cout << "Double: " << imp[i + 1] << std::endl;
			std::cout << "Float: " << imp[i] << std::endl;
		}
		else{
			std::cout << "Double: " << imp[i] << std::endl;
			std::cout << "Float: " << imp[i - 1] << std::endl;
		}
	}
	else{
		printChar(nb);
		printInt(nb);
		printFloat(nb);
		printDouble(nb);
	}
}

ScalarConverter::ScalarConverter(){
	std::cout << "Scalar default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const& cp){
	std::cout << "Scalar copy constructor called" << std::endl;
	*this = cp;
}

ScalarConverter::~ScalarConverter(){
	std::cout << "Scalar default destructor called" << std::endl;
}

ScalarConverter&	ScalarConverter::operator=(ScalarConverter const& cp){
	std::cout << "Scalar copy assignments operator called" << std::endl;
	(void)cp;
	return (*this);
}