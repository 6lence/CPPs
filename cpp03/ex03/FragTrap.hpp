/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:56:17 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/01 20:05:49 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	private:
		/* data */
	public:
		FragTrap();
		FragTrap(std::string Name);
		FragTrap(FragTrap const& cp);
		~FragTrap();
		FragTrap&	operator = (FragTrap const& cp);

		void	highFiveGuys();
};


#endif