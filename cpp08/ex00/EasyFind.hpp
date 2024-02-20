/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:26:01 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/20 14:09:28 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

template <typename T> void easyfind(T& container, int nb){
	if (std::find(container.begin(), container.end(), nb) != container.end())
		std::cout << "Is in this container" << std::endl;
	else
		std::cout << "Not in this container" << std::endl;
}