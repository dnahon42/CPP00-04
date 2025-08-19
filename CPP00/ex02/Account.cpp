/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnahon <dnahon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 17:34:06 by dnahon            #+#    #+#             */
/*   Updated: 2025/08/19 19:30:57 by dnahon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp()
{
    time_t now = std::time(nullptr);
    struct tm* t = std::localtime(&now);
    std::cout << "[" << (t->tm_year + 1900)
    << std::setw(2) << std::setfill('0') << t->tm_mon+1
    << std::setw(2) << std::setfill('0') << t->tm_mday << "_"
    << std::setw(2) << std::setfill('0') << t->tm_hour
    << std::setw(2) << std::setfill('0') << t->tm_min
    << std::setw(2) << std::setfill('0') << t->tm_sec << "] ";
}

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout <<"index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

void	Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";total:"
    << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits()
    << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
    << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
    << ";deposit:" << deposit;
    _amount += deposit;
    _totalNbDeposits++;
    _nbDeposits++;
    std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    if (this->_amount - withdrawal < 0)
    {
        std::cout << "index:" << this->_accountIndex << ";p_amount:"
        << this->_amount << ";withdrawal:refused" << std::endl;
        return (false);
    }
    else
    {
        std::cout << "index:" << this->_accountIndex << ";p_amount:"
        << this->_amount << ";withdrawal:" << withdrawal;
        _amount -= withdrawal; 
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return (true);
    }
    
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}