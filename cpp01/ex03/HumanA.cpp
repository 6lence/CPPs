/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:33:58 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/26 07:48:58 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& Weapon)
{
	_name = name;
	_gun = &Weapon;
}

HumanA::~HumanA(){}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _gun->getType() << std::endl;
}