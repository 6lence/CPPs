/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:38:17 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/16 16:09:18 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **ag){
	if (ac != 2)
	{
		std::cout << "Put an argument" << std::endl;
		return (0);
	}
	ScalarConverter::convert(ag[1]);
	return (0);
}