/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:13:09 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/01 18:59:57 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "iostream"

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hp = 10;
		int			_enr = 10;
		int			_atk = 0;

	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(ClapTrap const& cp);
		~ClapTrap();
		ClapTrap&	operator = (ClapTrap const& cp);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	getName() const;
		int			getEnr() const;
		int			getAtk() const;
		int			getHp() const;
};

#endif