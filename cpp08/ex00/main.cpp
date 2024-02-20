/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:36:02 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/20 14:10:43 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

int	main(){
    std::vector<int> test;
    std::list<int> test2;

    test.push_back(5);
    test.push_back(8);
    test.push_back(94);
    test.push_back(7);

    test2.push_back(900);
    test2.push_back(8);
    test2.push_back(94);
    test2.push_back(7);

    std::cout << "  ~TEST 1~    " << std::endl;
    easyfind(test, 5);
    easyfind(test, 900);

    std::cout << "  ~TEST 2~    " << std::endl;
    easyfind(test2, 5);
    easyfind(test2, 900);

    return (0);
}