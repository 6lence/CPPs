/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:53:31 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/19 08:26:40 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

template <typename T> void swap(T one, T two){
	T tmp;
	tmp = one;
	one = two;
	two = tmp;
}

template <typename T> T max(T one, T two){
	return (one > two) ? one: two;
}

template <typename T> T min(T one, T two){
	return (one < two) ? one: two;
}

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
