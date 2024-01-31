/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:24:19 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/26 07:48:45 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon*		_gun;
		std::string	_name;

	public:
		HumanA(std::string name, Weapon& Weapon);
		~HumanA(void);

		void	attack(void);
};

#endif