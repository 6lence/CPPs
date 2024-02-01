/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:10:32 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/01 18:17:16 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		

	public:
		ScavTrap(void);
		ScavTrap(std::string Name);
		ScavTrap(ScavTrap const& cp);
		~ScavTrap(void);
		ScavTrap&	operator = (ScavTrap const& cp);

		void	guardGate();
};

#endif