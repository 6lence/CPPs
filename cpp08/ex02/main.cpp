/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:44:16 by mescobar          #+#    #+#             */
/*   Updated: 2024/03/11 10:47:06 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "----------------Test 1----------------" << std::endl << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

	std::cout << std::endl;
	std::cout << "----------------Test 2----------------" << std::endl << std::endl;
	MutantStack<std::string> sstack;
	std::cout << "Is the stack empty:" << sstack.empty() << std::endl;
	sstack.push("I dont know bro");
	sstack.push("Blow your mind");
	sstack.push("just trying");
	std::cout << std::endl;
	MutantStack<std::string>::iterator	i;
	for (i = sstack.begin(); i != sstack.end(); ++i){
		std::cout << "stack: " << *i << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Is the stack empty:" << sstack.empty() << std::endl;
	std::cout << "Size: " << sstack.size() << std::endl;

	std::cout << std::endl;
	std::cout << "----------------Test 3----------------" << std::endl << std::endl;
	MutantStack<std::string> test;
	test.push(sstack.top());
	test.push(sstack.top());
	test.push(sstack.top());
	test.push(sstack.top());
	for (i = test.begin(); i != test.end(); ++i){
		std::cout << "stack: " << *i << std::endl;
	}

	std::cout << std::endl;
	return (0);
}