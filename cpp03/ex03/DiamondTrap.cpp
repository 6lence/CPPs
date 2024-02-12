/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:50:23 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/12 13:38:19 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Diamond Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name)
{
	std::cout << "Diamon Name assign constructor called" << std::endl;
	_name = Name;
	ClapTrap::_name = Name.append("_clap_name");
	this->_hp = FragTrap::_hp;
	this->_enr = ScavTrap::_enr;
	this->_atk = FragTrap::_atk;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& cp): ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "Diamond copy constructor called" << std::endl;
	*this = cp;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& cp)
{
	std::cout << "Diamon copy assignments operator called" << std::endl;
	if (this != &cp)
		*this = cp;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->_name << " and " << ClapTrap::_name << " wtf ?" << std::endl \
		<< "After this he died from confusion, fcking idiot DUH" << std::endl << std::endl;
}
