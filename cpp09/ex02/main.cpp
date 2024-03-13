/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:17:30 by mescobar          #+#    #+#             */
/*   Updated: 2024/03/13 15:20:21 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **ag){
	if (ac < 2)
		return (std::cout << "Error: at least 2 numbers expected" << std::endl, 0);
	std::string	seq;
	for(int i = 1; i < ac; i++){
		seq.append(ag[i]);
		seq.append((i < ac - 1 ? " " : ""));
	}
	PmergeMe	test = PmergeMe(seq);
	return (0);
}