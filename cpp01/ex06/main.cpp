/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:15:00 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/26 17:26:13 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl	oue;

	if (ac != 2)
		return (std::cout << "I only want a filter for Harl bro." << std::endl, 0);
	oue.complain("DEBUG", av[1]);
	oue.complain("INFO", av[1]);
	oue.complain("WARNING", av[1]);
	oue.complain("ERROR", av[1]);
	oue.complain("something else", av[1]);
	return (0);
}