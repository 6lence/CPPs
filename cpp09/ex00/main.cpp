/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar42@student.42perpigna    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:45:56 by mescobar          #+#    #+#             */
/*   Updated: 2024/03/12 11:51:53 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **ag){
	
	if (ac != 2)
		return (std::cerr << "Couldn't open the file." << std::endl, -1);
	
	BitcoinExchange	exchange = BitcoinExchange(ag[1]);

	return (0);
}