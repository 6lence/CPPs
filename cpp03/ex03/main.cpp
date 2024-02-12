/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:12:18 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/12 13:29:52 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap	 one = ClapTrap("Cepites de Phocolat");
	ClapTrap 	two = ClapTrap("Enthouane");
	ScavTrap 	three = ScavTrap("Ma senna > la senna de Targamas");
	FragTrap 	four = FragTrap("Eh Niquemouk");
	DiamondTrap	five = DiamondTrap("The Choosen One");

	std::cout << std::endl;
	one.attack(two.getName());
	two.takeDamage(one.getAtk());
	two.beRepaired(12345678);
	three.attack(one.getName());
	one.takeDamage(three.getAtk());
	one.attack(three.getName());
	three.beRepaired(one.getAtk());
	three.guardGate();
	int	i = 0;
	while (three.getHp() > 0)
	{
		if (i % 2 == 0)
			four.attack(three.getName());
		else
			five.attack(three.getName());
		three.takeDamage(four.getAtk());
	}
	four.highFiveGuys();
	std::cout << "Everyone made a high five with " << four.getName() << std::endl;
	five.highFiveGuys();
	std::cout << "Nobody liked " << five.getName() << std::endl;
	five.whoAmI();
	std::cout << std::endl;

	return (0);
}