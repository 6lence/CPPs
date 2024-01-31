/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:33:57 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/24 13:38:14 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*benjamin;
	Zombie	*horde;

	benjamin = newZombie("Benjamin");
	randomChump("Thomas");
	delete benjamin;
	horde = zombieHorde(8, "quentins");
	for(int i = 0; i < 8; i++)
		horde[i].announcement();
	delete[] horde;
}