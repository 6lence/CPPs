/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:45:43 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/14 15:19:36 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

int main(){

	Bureaucrat	one("one", 1);
	Bureaucrat	two("two", 80);
	Form		test1("test1", false, 74);
	Form		test2("test2", false, 76);

	std::cout << std::endl;
	test1.beSigned(one);
	test1.signForm(one);
	test2.beSigned(two);
	test2.signForm(two);
	std::cout << std::endl;

	return (0);
}