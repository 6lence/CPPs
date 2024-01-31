/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:57:29 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/26 17:28:46 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \
		enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for \
		years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]";
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level, std::string filter)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4 && !j)
	{
		if (filter == _level[i])
			j = i;
		i++;
	}
	if (!j)
	{
		std::cout << "Wtf bro, that is not a filter" << std::endl, NULL;
		return ;
	}
	for(i = 0; i < 4; i++)
	{
		if (level == _level[i] && i >= j)
		{
			(this->*ptr[i])();
			break ;
		}
		else if (i == 3)
			std::cout << "Harl doesnt have any complain !" << std::endl;
	}
}