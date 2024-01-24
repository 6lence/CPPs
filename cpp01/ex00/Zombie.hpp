/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:47:56 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/23 16:42:03 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "iostream"

class Zombie
{
	private:
		std::string _name;
	
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		std::string	getName(void);
		void		announcement(void);
};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

#endif