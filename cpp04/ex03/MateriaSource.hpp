/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:36:32 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/12 14:05:33 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria*	_stock[4];

	public:
		MateriaSource();
		MateriaSource(std::string Type);
		MateriaSource(MateriaSource const& cp);
		~MateriaSource();
		MateriaSource&	operator=(MateriaSource const& cp);
		
		void		learnMateria(AMateria* src) ;
		AMateria*	createMateria(std::string const& type);
};

#endif