/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:27:50 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/04 12:03:49 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
	private:
		Brain*	_brain;

	public:
		Cat();
		Cat(Cat const& cp);
		~Cat();
		Cat& operator=(Cat const& cp);

		void	makeSound() const;
		Brain*	getBrain() const;
		void	setIdeas(std::string Idea);
};

#endif