/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:18:03 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/12 13:22:55 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "Scav Default constructor called" << std::endl;
	this->_hp = 100;
	this->_enr = 50;
	this->_atk = 20;
}

ScavTrap::ScavTrap(std::string Name): ClapTrap(Name)
{
	std::cout << "Scav Name constructor called" << std::endl;
	this->_hp = 100;
	this->_enr = 50;
	this->_atk = 20;
}

ScavTrap::ScavTrap(ScavTrap const& cp): ClapTrap()
{
	std::cout << "Scav copy constuctor called" << std::endl;
	*this = cp;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Scav destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& cp)
{
	if (this != &cp)
		*this = cp;
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "Scav is now in Gate keeper mode" << std::endl;
}