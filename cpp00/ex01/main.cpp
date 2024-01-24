/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:21:10 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/24 12:50:34 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Common.h"

int	isnum(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	std::string res;
	PhoneBook	phone;

	std::cout << "Please use ADD, SEARCH or EXIT to use your PhoneBook !" << std::endl;
	while (1)
	{
		getline(std::cin, res);
		if (!res.compare("ADD"))
			phone.Add();
		else if (!res.compare("SEARCH"))
			phone.Get();
		else if (!res.compare("EXIT"))
			return (std::cout << "SHUTING DOWN THE PHONE RIGHT NOW !" << std::endl, 0);
	}
	return (0);
}
