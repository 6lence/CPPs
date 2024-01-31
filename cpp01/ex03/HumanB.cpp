/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:35:42 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/26 07:49:06 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_armed = false;
}

HumanB::HumanB(){}

HumanB::~HumanB(){}

void	HumanB::setWeapon(Weapon& Weapon)
{
	_armed = true;
	_gun = &Weapon;
}

void	HumanB::attack()
{
	if (!_armed)
		std::cout << _name << " attacks without a weapon" << std::endl;
	else
		std::cout << _name << " attacks with their " << _gun->getType() << std::endl;
}