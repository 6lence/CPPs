/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:49:20 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/26 07:11:29 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int	main(void)
{
	std::string 	str = "HI THIS IS BRAIN";
	std::string*	ptr = &str;
	std::string&	ref = str;

	std::cout << str << std::endl;
	std::cout << ptr << std::endl;
	std::cout << ref << std::endl;
	std::cout << &str << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << &ref << std::endl;
	str = "I have changed";
	std::cout << str << std::endl;
	std::cout << ptr << std::endl;
	std::cout << ref << std::endl;
	std::cout << &str << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << &ref << std::endl;
	ref = "Something else";
	std::cout << str << std::endl;
	std::cout << ptr << std::endl;
	std::cout << ref << std::endl;
	std::cout << &str << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << &ref << std::endl;
	return (0);
}