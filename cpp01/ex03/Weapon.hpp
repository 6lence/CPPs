/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:18:43 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/26 07:46:07 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP

# include "iostream"

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon(void);
		Weapon(std::string weapon);
		~Weapon(void);
		std::string	const	getType(void) const;
		void				setType(std::string type);
};

#endif