/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:55:58 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/13 08:40:40 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout << "MateriaSource default constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		_stock[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const& cp){
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		_stock[i] = 0;
	*this = cp;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& cp){
	std::cout << "MateriaSource copy assignments operator called" << std::endl;
	if (this != &cp)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_stock[i])
			{
				delete this->_stock[i];
				this->_stock[i] = 0;
			}
			if (cp._stock[i])
				this->_stock[i] = cp._stock[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(){
	std::cout << "MateriaSource default destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (_stock[i])
			delete _stock[i];
}

void	MateriaSource::learnMateria(AMateria* src)
{
	int	i;

	for (i = 0; _stock[i] ; i++);
	if (!_stock[i] && i < 4)
		_stock[i] = src;
	else
		std::cout << "C'est full bro" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_stock[i] && _stock[i]->getType() == type)
			return (_stock[i]->clone());
	}
	return (0);
}
