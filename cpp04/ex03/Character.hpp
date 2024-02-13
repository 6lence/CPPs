/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 07:30:29 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/13 08:46:06 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		AMateria*	_stock[4];
		std::string	_name;

	public:
		Character();
		Character(std::string Name);
		Character(Character const& cp);
		virtual ~Character();
		Character&	operator=(Character const& cp);

		std::string const & getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		AMateria*			getItem(int i);
};

#endif