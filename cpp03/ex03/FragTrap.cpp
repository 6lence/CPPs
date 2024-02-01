/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:00:25 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/01 19:09:57 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Frag Default constructor called" << std::endl;
	this->_hp = 100;
	this->_enr = 100;
	this->_atk = 30;
}

FragTrap::FragTrap(std::string Name): ClapTrap(Name)
{
	std::cout << "Frag Name constructor called" << std::endl;
	this->_hp = 100;
	this->_enr = 100;
	this->_atk = 30;
}

FragTrap::FragTrap(FragTrap const& cp)
{
	std::cout << "Frag copy constuctor called" << std::endl;
	*this = cp;
}

FragTrap::~FragTrap()
{
	std::cout << "Frag destructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const& cp)
{
	if (this != &cp)
		*this = cp;
	return (*this);
}

void	FragTrap::highFiveGuys()
{
	std::cout << this->_name << " wants to high five !" << std::endl << std::endl;
}