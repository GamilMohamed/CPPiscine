/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 23:25:59 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/22 20:22:02 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "Colors.hpp"

BitcoinExchange::BitcoinExchange( void ) { if (SHOW) std::cout << "BitcoinExchange constructor called" << std::endl; }

BitcoinExchange::~BitcoinExchange( void ) { if (SHOW) std::cout << "BitcoinExchange destructor called" << std::endl; }

BitcoinExchange::BitcoinExchange( BitcoinExchange const & src )
{
	if (SHOW) std::cout << "BitcoinExchange copy constructor called" << std::endl;
	*this = src;
}

BitcoinExchange & BitcoinExchange::operator=( BitcoinExchange const & rhs )
{
	if (SHOW) std::cout << "BitcoinExchange assignement constructor called" << std::endl;
	if (this != &rhs)
		_map = rhs._map;
	return *this;
}

void BitcoinExchange::print( void )
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

float BitcoinExchange::getValue( std::string str )
{
	std::map<std::string, float>::iterator it;
	float tmp = 0;
	
	for (it = _map.begin(); it != _map.end(); it++)
	{
		// std::cout << "comparing [" << str << "] and [" << it->first << "]\n";
		if (str > it->first)
			tmp = it->second;
		if (str == it->first)
			return it->second;
	}
	return tmp;
}

void BitcoinExchange::parse( std::string str )
{
	std::string date, value;
	size_t pos = 0;

	while ((pos = str.find(",")) != std::string::npos)
	{
    	date = str.substr(0, pos);
		value = str.substr(pos + 1);
		_map[date] = atof(value.c_str());
    	str.erase(0, pos + 1);
	}
}