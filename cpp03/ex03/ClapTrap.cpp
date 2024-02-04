/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:21:03 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/01 19:16:52 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){ std::cout << "Regular constructor called" << std::endl;}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "Name constructor called" << std::endl;
	_name = Name;
}

ClapTrap::ClapTrap(ClapTrap const& cp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cp;
}

ClapTrap::~ClapTrap(void){ std::cout << "Destructor called" << std::endl;}

ClapTrap&	ClapTrap::operator=(ClapTrap const& cp)
{
	std::cout << "Copy assignements operator called" << std::endl;
	if (this != &cp)
		*this = cp;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << this->_name << ":" << std::endl;
	if (this->_enr > 0 && this->_hp > 0)
	{
		std::cout << "Attacks " << target \
			<< " dealing " << this->getAtk() << " dmg !" << std::endl;
		this->_enr--;
		std::cout << this->_name << " Have " <<  this->_enr << " Energy remaining !" << std::endl;
	}
	else
	{
		if (this->_hp <= 0)
			std::cout << "He is dead bro, he CANNOT do ANYTHING ;-;" << std::endl;
		else if (this->_enr)
			std::cout << "Heh, too tired to attack: " << this->_enr << " Energy left" << std::endl;
	}
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << ":" << std::endl;
	if (this->_hp > 0)
	{
		std::cout << "Takes " << amount << " points of damage !" << std::endl;
		this->_hp -= amount;
		if (this->_hp > 0)
			std::cout << "Have " << this->_hp << " left !" << std::endl;
		else if (this->_hp <= 0)
			std::cout << "YOU KILLED HIM, YOU KILLED " << this->_name << " !!!!" << std::endl; 
	}
	else
		std::cout << this->_name << " Is already dead bro, stop attacking 🙁" << std::endl;
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << ":" << std::endl;
	if (this->_enr > 0)
	{
		std::cout << "Restored " << amount << " of HP !" << std::endl;
		this->_enr--;
		this->_hp += amount;
		std::cout << "Energy left: " << this->_enr << std::endl;
		std::cout << "Hp remaining: " << this->_hp << std::endl;
	}
	else if (this->_enr <= 0)
		std::cout << this->_name << " Doesn't have enough energy to restore hp !" << std::endl;
	else if (this->_hp <= 0)
		std::cout << this->_name << " Is dead, please stop playing 😢" << std::endl;
	std::cout << std::endl;
}

std::string	ClapTrap::getName() const{ return(_name); }

int		ClapTrap::getEnr() const{ return(_enr); }

int		ClapTrap::getAtk() const{ return(_atk); }

int		ClapTrap::getHp() const{ return(_hp); }