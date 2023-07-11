/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:48:15 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 11:53:47 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

/* Static variable initialization. */
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/* Constructor. */
Account::Account(int initial_deposit) {
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
              << "amount:" << _amount << ";"
              << "created" << std::endl;
}

Account::Account(void) { Account(0); }

/* Destructor. */
Account::~Account(void) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
              << "amount:" << _amount << ";"
              << "closed" << std::endl;
    _nbAccounts--;
}

/* Getters. */
int Account::getNbAccounts(void) { return _nbAccounts; }
int Account::getTotalAmount(void) { return _totalAmount; }
int Account::getNbDeposits(void) { return _totalNbDeposits; }
int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }
int Account::checkAmount(void) const { return _amount; }

/* Make deposits. */
void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    _nbDeposits++;
    Account::_totalNbDeposits++;
    Account::_totalAmount += deposit;
    std::cout << "index:" << _accountIndex << ";"
              << "p_amount:" << _amount << ";" << std::flush;
    _amount += deposit;
    std::cout << "deposit:" << deposit << ";"
              << "amount:" << _amount << ";"
              << "nb_deposits:" << _nbDeposits << std::endl;
}

/* Make withdrawal, return whether it was successful. */
bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
              << "p_amount:" << _amount << ";"
              << "withdrawal:" << std::flush;
    if (withdrawal > _amount) {
        std::cout << "refused" << std::endl;
        return false;
    }
    std::cout << withdrawal << ";" << std::flush;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    _amount -= withdrawal;
    std::cout << "amount:" << _amount << ";"
              << "nb_withdrawals:" << _nbDeposits << std::endl;
    return true;
}

/* Display current account status. */
void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
              << "amount:" << _amount << ";"
              << "deposits:" << _nbDeposits << ";"
              << "withdrawals:" << _nbWithdrawals << std::endl;
}

/* Display the current timestamp in the correct format. */
void Account::_displayTimestamp() {
    std::time_t time = std::time(NULL);
    std::tm *current = std::localtime(&time);

    std::cout << "[" << std::setfill('0') << std::setw(4)
              << current->tm_year + 1900 << std::setw(2) << current->tm_mon
              << std::setw(2) << current->tm_mday << "_" << std::setw(2)
              << current->tm_hour << std::setw(2) << current->tm_min
              << std::setw(2) << current->tm_sec << "] ";
    // std::cout << "[19920104_091532] ";
}

/* Display account information. */
void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";"
              << "total:" << _totalAmount << ";"
              << "deposits:" << _totalNbDeposits << ";"
              << "withdrawals:" << _totalNbWithdrawals << std::endl;
}
