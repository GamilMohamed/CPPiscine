/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 23:25:59 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/18 00:05:53 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "Colors.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::cout << "BitcoinExchange constructor called" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "BitcoinExchange destructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src)
{
	std::cout << "BitcoinExchange copy constructor called" << std::endl;
	*this = src;
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	if (this != &rhs)
	{
	}
	return *this;
}

void BitcoinExchange::print()
{
	std::map<std::string, float>::iterator it;

	for (it = _map.begin(); it != _map.end(); it++)
	{
		std::cout << CYAN << it->first;
		std::cout << RESET << " ";
		std::cout << WHITE << it->second;
		std::cout << RESET << std::endl;
	}
}

void BitcoinExchange::parse( std::string str )
{
	std::string date, value;
	std::string delimiter = ",";
	size_t pos = 0;
	while ((pos = str.find(",")) != std::string::npos)
	{
    	date = str.substr(0, pos);
		value = str.substr(pos + 1);
		_map[date] = atof(value.c_str());
    	str.erase(0, pos + 1);
	}
}