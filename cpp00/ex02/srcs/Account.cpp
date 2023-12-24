/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:21:56 by mfeldman          #+#    #+#             */
/*   Updated: 2023/12/24 18:33:41 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
			  << ";amount:" << checkAmount()
			  << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
			  << ";amount:" << checkAmount() 
			  << ";closed" << std::endl;
	_nbAccounts--;
	_totalAmount -= _amount;
}

void Account::_displayTimestamp(void) 
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	std::cout << "[" << 1900 + ltm->tm_year << ltm->tm_mon << ltm->tm_mday << "_";
	std::cout << ltm->tm_hour << ltm->tm_min << ltm->tm_sec << "] ";
}

int Account::getNbAccounts(void) { return _nbAccounts; }

int Account::getTotalAmount(void) { return _totalAmount; }

int Account::getNbDeposits(void) { return _totalNbDeposits; }

int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
			  << ";total:" << getTotalAmount()
			  << ";deposits:" << getNbDeposits()
			  << ";withdrawals:" << getNbWithdrawals()
			  << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << checkAmount() 
			  << ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";amount:" << checkAmount() 
			  << ";nb_deposits:" << _nbDeposits 
			  << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
			  << ";p_amount:" << checkAmount()
			  << ";withdrawal:";

	if (checkAmount() >= withdrawal)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << withdrawal 
				  << ";amount:" << checkAmount()
				  << ";nb_withdrawals:" << _nbWithdrawals 
				  << std::endl;
		return true;
	}
	else 
	{
		std::cout << "refused" << std::endl;
		return false;
	}
}

int Account::checkAmount(void) const { return _amount; }

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
			  << ";amount:" << checkAmount()
			  << ";deposits:" << _nbDeposits 
			  << ";withdrawals:" << _nbWithdrawals 
			  << std::endl;
}
