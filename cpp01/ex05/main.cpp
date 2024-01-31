/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:15:00 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/26 17:16:27 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl	oue;

	oue.complain("DEBUG");
	oue.complain("ERROR");
	oue.complain("INFO");
	oue.complain("WARNING");
	oue.complain("something else");
	return (0);
}