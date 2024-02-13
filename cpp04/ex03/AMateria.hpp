/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 07:47:27 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/12 14:11:08 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "iostream"
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	
	public:
		AMateria();
		AMateria(std::string const& type);
		AMateria(AMateria const& cp);
		virtual ~AMateria();
		AMateria& operator=(AMateria const& cp);

		std::string const&	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void 		use(ICharacter& target);
};

#endif