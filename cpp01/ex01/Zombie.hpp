/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:47:56 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/24 13:28:59 by mescobar         ###   ########.fr       */
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

		void		setName(std::string name);
		std::string	getName(void);
		void		announcement(void);
};

Zombie*		zombieHorde(int n, std::string name);
Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

#endif