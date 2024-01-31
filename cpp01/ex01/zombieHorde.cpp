/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:18:07 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/24 13:39:18 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int i, std::string name)
{
	int		j;
	Zombie*	tab = new Zombie[i];

	i--;
	while (i >= 0)
		tab[i--].setName(name);
	return (tab);
}