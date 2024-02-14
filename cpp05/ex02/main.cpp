/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar42@student.42perpigna    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:45:43 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/14 20:07:14 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"

int main(){

	Bureaucrat	one("one", 1);
	Bureaucrat	two("two", 80);
	AForm		test1("test1", false, 74);
	AForm		test2("test2", false, 76);

	std::cout << std::endl;
	test1.beSigned(one);
	test1.signAForm(one);
	test2.beSigned(two);
	test2.signAForm(two);

	std::cout << std::endl << test1;
	std::cout << std::endl << test2 << std::endl;
	std::cout << std::endl;

	return (0);
}