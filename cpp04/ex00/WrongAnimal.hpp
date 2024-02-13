/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 08:42:05 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/13 09:38:25 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "iostream"
# include "string"
# include "ctype.h"
# include "string.h"
# include "iomanip"

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const& cp);
		~WrongAnimal(void);
		WrongAnimal&	operator=(WrongAnimal const& cp);

		std::string	getType() const;
		void	makeSound() const;
};

#endif