/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Accounts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:48:51 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/21 02:38:26 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <stdio.h>

static int	total = 0;
static int	index = 0;
static int	total_d = 0;
static int	total_w = 0;

void	displaytime(void)
{
	// time_t	raw;
	time_t timestamp = time( NULL );
	struct tm *time = localtime( & timestamp );
	 
	std::cout << "[" << time->tm_year + 1900 << time->tm_mon << time->tm_mday << "_" << time->tm_hour << time->tm_min << time->tm_sec << "]";
}

Account::Account(int initial_deposit)
{
	displaytime();
	if (index == 8)
		index = 0;
	this->_amount = initial_deposit;
	total += initial_deposit; 
	std::cout << "index:" << index++ << ";amount:" << initial_deposit << ";created" << std::endl; 
	
	return ;
}

Account::~Account(void)
{
	displaytime();
	if (index == 8)
		index = 0;
	std::cout << "index:" << index++ << ";amount:" << this->_amount << ";closed" << std::endl; 
	return ;
}

void Account::displayAccountsInfos()
{
	displaytime();
	std::cout << "accounts:8"  << ";total:" << total << ";deposits:" << total_d << ";withdrawals:" << total_w << std::endl; 
}


void Account::makeDeposit(int deposit)
{
	displaytime();
	if (index == 8)
		index = 0;
	total += deposit;
	this->_nbDeposits += 1;
	std::cout << "index:" << index++ << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << (this->_amount + deposit) << ";nb_deposits:1" << std::endl; 
	this->_amount += deposit; 

	total_d++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	displaytime();
	if (index == 8)
		index = 0;

	if (this->_amount < withdrawal)
	{
		std::cout << "index:" << index++ << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl; 
		return (false);
	}
	this->_nbWithdrawals += 1; 
	std::cout << "index:" << index++ << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << (this->_amount - withdrawal) << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl; 
	total_w++;
	total -= withdrawal;
	this->_amount -=  withdrawal;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (1);
}

void	Account::displayStatus( void ) const
{
	displaytime();
	if (index == 8)
		index = 0;
	std::cout << "index:" << index++ << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits  << ";withdrawals:" << this->_nbWithdrawals << std::endl; 

}
