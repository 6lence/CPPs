/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:10:33 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/04 12:25:21 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "iostream"
# include "string"
# include "ctype.h"
# include "string.h"
# include "iomanip"
# include "Brain.hpp"

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const& cp);
		virtual ~Animal(void);
		Animal&	operator=(Animal const& cp);

		std::string	getType() const;
		virtual void	makeSound() const;
};

#endif