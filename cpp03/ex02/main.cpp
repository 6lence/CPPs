/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:12:18 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/01 19:14:08 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap one = ClapTrap("Cepites de Phocolat");
	ClapTrap two = ClapTrap("Enthouane");
	ScavTrap three = ScavTrap("Ma senna > la senna de Targamas");
	FragTrap four = FragTrap("Eh Niquemouk");

	std::cout << std::endl;
	one.attack(two.getName());
	two.takeDamage(one.getAtk());
	two.beRepaired(12345678);
	three.attack(one.getName());
	one.takeDamage(three.getAtk());
	one.attack(three.getName());
	three.beRepaired(one.getAtk());
	three.guardGate();
	while (three.getHp() > 0)
	{
		four.attack(three.getName());
		three.takeDamage(four.getAtk());
	}
	four.highFiveGuys();
	std::cout << std::endl;

	return (0);
}