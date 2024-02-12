/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:21:03 by mescobar          #+#    #+#             */
/*   Updated: 2024/02/12 13:25:31 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){ 
	std::cout << "Regular constructor called" << std::endl;
	_hp = 0;
	_atk = 0;
	_enr = 0;
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "Claptrap name constructor called" << std::endl;
	_name = Name;
	_hp = 0;
	_atk = 0;
	_enr = 0;
}

ClapTrap::ClapTrap(ClapTrap const& cp)
{
	std::cout << "Claptrap copy constructor called" << std::endl;
	*this = cp;
	_hp = 0;
	_atk = 0;
	_enr = 0;
}

ClapTrap::~ClapTrap(void){ std::cout << "Claptrap Ddstructor called" << std::endl;}

ClapTrap&	ClapTrap::operator=(ClapTrap const& cp)
{
	std::cout << "Claptrap copy assignements operator called" << std::endl;
	if (this != &cp)
	{
		this->_atk = cp.getAtk();
		this->_enr = cp.getEnr();
		this->_hp = cp.getHp();
		*this = cp;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_enr > 0 && this->_hp > 0)
	{
		std::cout << this->_name << " attacks " << target \
			<< " dealing " << this->getAtk() << " dmg !" << std::endl;
		this->_enr--;
		std::cout << this->_enr << " Energy remaining !" << std::endl;
	}
	else
	{
		std::cout << this->_name << " CANNOT DO ANYTHING !" << std::endl \
				<< "Energy left: " << this->_enr << " !" << std::endl \
				<< "HP left: " << this->_hp << " !" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp > 0)
	{
		std::cout << this->_name << " Takes " << amount << " points of damage !" << std::endl;
		this->_hp -= amount;
		if (this->_hp <= 0)
			std::cout << "YOU KILLED HIM, YOU KILLED " << this->_name << " !!!!" << std::endl; 
	}
	else
		std::cout << this->_name << " Is already dead bro, stop attacking 🙁" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_enr > 0)
	{
		std::cout << this->_name << " Restored " << amount << " of HP !" << std::endl;
		this->_enr--;
		this->_hp += amount;
		std::cout << "Energy left: " << this->_enr << std::endl;
		std::cout << "Hp remaining: " << this->_hp << std::endl;
	}
	else if (this->_enr <= 0)
		std::cout << this->_name << " Doesn't have enough energy to restore hp !" << std::endl;
	else if (this->_hp <= 0)
		std::cout << this->_name << " Is dead, please stop playing 😢" << std::endl;
}

std::string	ClapTrap::getName() const{ return(_name); }

int		ClapTrap::getEnr() const{ return(_enr); }

int		ClapTrap::getAtk() const{ return(_atk); }

int		ClapTrap::getHp() const{ return(_hp); }