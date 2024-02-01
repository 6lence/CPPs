/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:12:18 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/01 18:38:25 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap one("Cepites de Phocolat");
	ClapTrap two("Enthouane");

	one.attack(two.getName());
	two.takeDamage(one.getAtk());
	two.beRepaired(1234567);
	return (0);
}