/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:20:48 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/04 08:38:00 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog const& cp);
		Dog& operator=(Dog const& cp);
		~Dog();
		void	makeSound() const;
};

#endif