/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 09:06:34 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/04 09:32:35 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "iostream"

class Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain();
		Brain(Brain const& cp);
		~Brain();
		Brain& operator=(Brain const& cp);

		std::string	getIdeas(int i) const;
		void	setIdeas(int i, std::string idea);
};

#endif