/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:53:19 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/22 04:43:37 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "Colors.hpp"

Harl::Harl()
{
	this->ft[0] = &Harl::_debug;
	this->ft[1] = &Harl::_info;
	this->ft[2] = &Harl::_warning;
	this->ft[3] = &Harl::_error;
	this->index[0] = "DEBUG";
	this->index[1] = "INFO";
	this->index[2] = "WARNING";
	this->index[3] = "ERROR";
}

Harl::~Harl()
{
	return ;
}

void	Harl::_debug(void)
{
	std::cout << BCYAN << "DEBUG:";
	std::cout << WHITE << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << BYELLOW << "INFO:";
	std::cout << WHITE << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << BMAGENTA << "WARNING:";
	std::cout << WHITE << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << BRED << "ERROR:";
	std::cout << WHITE <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->index[i] == level)
			return (this->*ft[i])();
	}
}
