/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:26:56 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/24 12:37:14 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Common.h"

Contact::Contact(){}

Contact::~Contact(){}

void	Contact::names(std::string str)
{
	int	i;
	int	len;

	if (str.size() >= 9)
	{
		str.resize(9);
		std::cout << str << ".";
	}
	else
	{
		i = 0;
		len = 9 - str.size();
		while (i++ <= len)
			std::cout << " ";
		std::cout << str;
	}
}

void	Contact::showContact(int i)
{
	std::cout << "Index: " << i + 1 << std::endl
				<< "First Name: " << _F_name << std::endl
				<< "Name: " << _Name << std::endl
				<< "Nickname: " << _Nick << std::endl
				<< "NUmber: " << _Number << std::endl
				<< "Secret: " << _Secret << std::endl;
}

void	Contact::show(int j)
{
	int	i;

	i = -1;
	while (++i < 43)
		std::cout << "*";
	std::cout << std::endl;
	i = 0;
	while (++i < 10)
		std::cout << " ";
	std::cout << j + 1 << "|";
	names(Contact::_F_name);
	std::cout << "|";
	names(Contact::_Name);
	std::cout << "|";
	names(Contact::_Nick);
	std::cout << std::endl;
	i = -1;
	while (++i < 43)
		std::cout << "*";
	std::cout << std::endl;
}

void	Contact::set(std::string str, int n)
{
	if (!n)
		_F_name = str;
	else if (n == 1)
		_Name = str;
	else if (n == 2)
		_Nick = str;
	else if (n == 3)
		_Number = str;
	else if (n == 4)
		_Secret = str;
}
