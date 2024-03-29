/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:13:09 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/12 13:32:15 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "iostream"

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hp;
		int			_enr;
		int			_atk;

	public:
		ClapTrap(void);
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