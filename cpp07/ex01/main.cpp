/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar42@student.42perpigna    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:53:31 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/18 21:14:15 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

template<typename T> void iter(T* adress, int len, void (*f)(T&)){
	for (int i = 0; i < len; i++){
		f(adress[i]);
	}
}

template <typename T> void swap(T one, T two){
}

template <typename T> T max(T one, T two){
	return (one > two) ? one: two;
}

template <typename T> T min(T one, T two){
	return (one < two) ? one: two;
}

template <typename T> void	display(T elem){
	std::cout << elem << std::endl;
}

int main( void ) {

	int 		test1[5] = {1, 2, 3, 4, 5};
	std::string test2[4] = {"Ceci", "est", "un", "test."};

	std::cout << "Test 1" << std::endl;
	iter(test1, 5, &display);
	std::cout << "Test 2" << std::endl;
	iter(test2, 4, &display);
	return 0;
}
