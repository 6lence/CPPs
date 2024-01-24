/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescobar <mescobar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:20:54 by mescobar          #+#    #+#             */
/*   Updated: 2024/01/24 13:08:14 by mescobar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "iostream"
#include "ctime"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_totalAmount += _amount;
	_accountIndex = _nbAccounts;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts += 1;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"
				<< _amount << ":created"
				<< std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";amount:" << _amount
				<<	";closed" << std::endl;
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
				<< ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits()
				<< ";withdrawals:" << getNbWithdrawals()
				<< std::endl;
}

void	Account::_displayTimestamp()
{
	time_t		time;
	struct tm	*t;

	std::time(&time);
	t = localtime(&time);
	std::cout << "[" << t->tm_year + 1900;
	if (t->tm_mon < 10)
		std::cout << '0';
	std::cout << t->tm_mon + 1;
	if (t->tm_mday < 10)
		std::cout << "0";
	std::cout << t->tm_mday << "_";
	if (t->tm_hour < 10)
		std::cout << '0';
	std::cout << t->tm_hour;
	if (t->tm_min < 10)
		std::cout << '0';
	std::cout<< t->tm_min;
	if (t->tm_sec < 10)
		std::cout << '0';
	std::cout << t->tm_sec << "] ";
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals << std::endl;

}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (_amount < withdrawal)
		return (false);
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";withdrawals:" << withdrawal;
	_amount -= withdrawal;
	_nbWithdrawals += 1;
	_totalNbWithdrawals += _nbWithdrawals;
	std::cout << ";amount" << _amount
				<< ";nb_withdrawals:" << _nbWithdrawals
				<< std::endl;
	return (true);
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += _nbDeposits;
	std::cout << ";amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits
				<< std::endl;
}

int	Account::checkAmount() const
{
	return (_amount);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbDeposits);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}
