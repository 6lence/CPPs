/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar42@student.42perpigna    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:19:15 by mescobar          #+#    #+#             */
/*   Updated: 2024/03/12 16:43:58 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **ag){
	if (ac != 2){
		return (std::cerr << "At least one argument needed." << std::endl, 2);
	}

	RPN test = RPN(ag[1]);
	return (0);
}