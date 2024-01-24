/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:13:43 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/24 12:48:52 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Common.h"

PhoneBook::PhoneBook(void)
{
	_index = 0;
}

PhoneBook::~PhoneBook(void){}

void	PhoneBook::Add(void)
{
	_contact[_index].set(GetLine("First Name"), 0);
	_contact[_index].set(GetLine("Name"), 1);
	_contact[_index].set(GetLine("Nickname"), 2);
	_contact[_index].set(GetLine("Number"), 3);
	_contact[_index].set(GetLine("Secret"), 4);
	_index++;
	if (_index >= 7)
	{
		std::cout << "The next contact will replace the oldest contact." << std::endl;
		_index = 0;
	}
}

void	PhoneBook::Get(void)
{
	int			i;
	std::string	str;

	i = 0;
	while (i < 8)
		_contact[i].show(i++);
	std::cout << "Which contact do you want to check ? 1-8" << std::endl;
	std::cin >> str;
	while (!isnum(str) || str.size() >= 2)
	{
		std::cout << "Incorrect, number must be between 1 - 8." << std::endl
					<< "Pick a number again: 1 - 8" << std::endl;
		std::cin >> str;
	}
	i = stoi(str);
	while (str.empty() || str.find(' ') != std::string::npos)
	{
		getline(std::cin, str);
		if (str.empty() || str.find(' ') != std::string::npos)
			std::cout << "Wrong scope ! Expect a string with no spaces !" << std::endl;
	}
	_contact[i - 1].showContact(i - 1);
}

std::string	PhoneBook::GetLine(std::string type)
{
	std::string	res;

	std::cout << "Type the " << type << ": " << std::endl;
	res = "";
	if (!type.compare("Secret"))
	{
		getline(std::cin, res);
		return (res);
	}
	while (res.empty() || res.find(' ') != std::string::npos)
	{
		getline(std::cin, res);
		if (res.empty() || res.find(' ') != std::string::npos)
			std::cout << "Wrong scope ! Expect a string with no spaces !" << std::endl;
	}
	return (res);
}
