/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:28:16 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/26 07:48:29 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon*		_gun;
		bool		_armed;
		std::string	_name;

	public:
		HumanB(std::string name);
		HumanB(void);
		~HumanB(void);

		void	attack(void);
		void	setWeapon(Weapon& Weapon);
};

#endif