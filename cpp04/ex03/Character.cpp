/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 07:41:19 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/13 08:50:00 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
	std::cout << "Default Character constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		_stock[i] = 0;
}

Character::Character(std::string Name){
	std::cout << "Character name assign constructor called" << std::endl;
	_name = Name;
	for(int i = 0; i < 4; i++)
		_stock[i] = 0;
}

Character::Character(Character const& cp)
{
	for(int i = 0; i < 4; i++)
		_stock[i] = 0;
	*this = cp;
}

Character::~Character(){
	std::cout << "Character default destructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		if (_stock[i])
			delete _stock[i];
}

Character&	Character::operator=(Character const& cp)
{
	if (this != &cp)
	{
		for(int i = 0; i < 4; i++)
		{
			if (this->_stock[i])
				delete this->_stock[i];
			this->_stock[i] = 0;
			if (cp._stock[i])
				this->_stock[i] = cp._stock[i];
		}
		*this = cp;
	}
	return (*this);
}

std::string const&	Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria*	m)
{
	int	i;

	for(i = 0; _stock[i] && i < 4; i++){}
	if (!_stock[i] && i < 4)
		_stock[i] = m;
}

void	Character::unequip(int idx)
{
	if (_stock[idx])
	{
		delete _stock[idx];
		_stock[idx] = 0;
	}
}

void	Character::use(int idx, ICharacter& target){
	std::cout << this->getName() << " used " << this->getItem(idx) \
	<< " on " << target.getName() << std::endl;
	
}

AMateria*	Character::getItem(int i)
{
	return (_stock[i]);
}