/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:10:22 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/05 07:45:25 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j; //should not create a leak
	delete i;

	const Animal *tab[10];

	for (int i = 0; i < 5; i++)
		tab[i] = new Dog();
	for (int i = 5; i < 10; i++)
		tab[i] = new Cat();

	for (int i = 0; i < 10; i++)
		tab[i]->makeSound();

	for (int i = 0; i < 10; i++)
		delete tab[i];

	std::cout << std::endl;

	Cat copy;
	Cat cat;

	cat.setIdeas("OHHHHHHHHHHHHH DAAAAAAAMN DANIEL");
	for (int i = 0; i < 100; i++)
		std::cout << cat.getBrain()->getIdeas(i) << std::endl;
	std::cout << std::endl;

	copy = cat;
	copy.setIdeas("La vie de mamere");

	for (int i = 0; i < 100; i++)
		std::cout << cat.getBrain()->getIdeas(i) << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << copy.getBrain()->getIdeas(i) << std::endl;

	return 0;
}