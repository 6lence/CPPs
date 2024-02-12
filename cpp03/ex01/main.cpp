/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:12:18 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/12 13:24:49 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap one = ClapTrap("Cepites de Phocolat");
	ClapTrap two = ClapTrap("Enthouane");
	ScavTrap three = ScavTrap("Ma senna > la senna de Targamas");

	std::cout << std::endl;
	one.attack(two.getName());
	two.takeDamage(one.getAtk());
	two.beRepaired(12345678);
	three.attack(one.getName());
	one.takeDamage(three.getAtk());
	one.attack(three.getName());
	three.beRepaired(one.getAtk());
	three.guardGate();
	std::cout << std::endl;

	return (0);
}