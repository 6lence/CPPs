/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 11:08:43 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/18 17:18:06 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "iostream"
#include "cstdlib"

Base*	generate(void){

	int	r = rand() % 3;

	if (r == 1)
		return (new A());
	else if (r == 2)
		return (new B());
	else
		return (new C());
}

void	identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "Type is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type is C" << std::endl;
	else
		std::cout << "No class known" << std::endl;
}

void	identify(Base& p){
	
	try{
		A&	a = dynamic_cast<A&>(p);
		std::cout << "Type is A" << std::endl;
		(void)a;
	}
	catch(const std::exception& tmp){}
	try{
		C&	c = dynamic_cast<C&>(p);
		std::cout << "Type is C" << std::endl;
		(void)c;
	}
	catch(const std::exception& tmp){}
	try{
		B&	b = dynamic_cast<B&>(p);
		std::cout << "Type is B" << std::endl;
		(void)b;
	}
	catch(const std::exception& tmp){}
}

int main(){
	Base* test = generate();

	std::cout << "	TEST *	" << std::endl;
	identify(test);
	std::cout <<  std::endl << "	TEST &	" << std::endl;
	identify(*test);

	delete test;
	return (0);
	return (0);
}