/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:26:58 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/22 20:50:58 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Error.h"
#include "BitcoinExchange.hpp"

#include <string>
#include <sstream>
#define DAY 2
#define MONTH 1
#define YEAR 0

unsigned long lenOfFloat(float z)
{
	unsigned long i = 0;
	float nb = z;
	// std::cout << BGREEN << nb << RESET << std::endl;
	while (nb >= 1)
	{
		std::cout << BBLUE << nb << RESET << std::endl;
		nb /= 10;
		i++;
	}
	return (i);
}

int	isNumeric( std::string nbr )
{
	return (nbr.find_first_not_of("0123456789. ") == std::string::npos);
}

float	check_value(std::string string)
{
	float		nb = 0;

    std::stringstream ss(string);
    ss >> nb;
    size_t num_length = string.length() - 1;
	size_t sz = 0;
	if (string[sz] == ' ')
		sz++;
	while (string[sz] != ' ' && string[sz] != '\0')
		sz++;
	
	if (sz - 1 != num_length)
		throw std::underflow_error(LARGENUMBER + string);
	if (nb < 0)
		throw std::underflow_error(NEGATIVE);
	if (nb > 1000)
		throw std::overflow_error(LARGENUMBER);
	return (nb);
}

void check_date(t_date date, std::string str)
{
	bool bissextile = false;
	t_date max = { 9999, 12, 31 };

	if (date.year % 4 == 0)
		bissextile = true;
	if (date.month < 8)
		max.day = (date.month % 2 == 0) ? 30 : 31;
	if (date.month == 2)
		max.day = (bissextile) ? 29 : 28;
	if (date.year > max.year || date.month > max.month || date.day > max.day)
		throw std::invalid_argument(BADINPUT + str);
}

float	parse(std::string& string)
{
	int					i(-1), type(0);
	long long int		nb(0);
	struct t_date		date = {0, 0, 0};

	while (string[++i])	
	{
		if (string[i] == ' ' && type == DAY)
			i++;
		if (string[i] == '-')
		{
			type ? date.month = nb : date.year = nb;
			if ((nb == 0) || (i != 4 && i != 7 && i != 10))
				break ;
			nb = 0;
			i++;
			type++;
		}
		if (string[i] == '|' && type == DAY)
		{
			date.day = nb;
			check_date(date, string);
			return (check_value(&string[++i]));
		}
		else if (isdigit(string[i]))
			nb = nb * 10 + (string[i] - '0');
	}
	throw std::invalid_argument(BADINPUT + string);
}

void	readfile(std::ifstream& file, BitcoinExchange& btc)
{
	std::string		string;
	size_t pos = 0;
	
	getline(file, string);
	if (string != "date | value")
		std::cout << "First line is not data | value !" << std::endl;
	while (getline(file, string))
	{
		try {
			float nb = parse(string);
			while ((pos = string.find(" |")) != std::string::npos)
    			string.erase(pos);
			std::cout << string << " => ";
			std::cout << (nb * btc.getValue( string )) << std::endl;
		}
		catch (std::exception& e) {
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
}

void	readcsv( std::ifstream& file, BitcoinExchange& btc )
{
	std::string		string;
	
	getline(file, string);
	if (string != "date,exchange_rate")
		std::cout << "First line is not date,exchange_rate !" << std::endl;
	while (getline(file, string))
		btc.parse(string);
}

int	main(int ac, char **av)
{
	(void)av;
	(void)ac;
	BitcoinExchange		btc;
	if (ac != 2)
		return (std::cout << BMAGENTA << WRONGFILE << RESET << std::endl, 1);
	std::ifstream csv("data.csv");
	if (!csv)
		return (std::cout << RED << "can't find csv file !" << RESET << std::endl, 1);
	readcsv(csv, btc);
	std::ifstream ifs(av[1]);
	if (!ifs)
		return (std::cout << RED << WRONGFILE << RESET << std::endl, 1);
	readfile(ifs, btc);
	// btc.print();
	// std::cout << btc.getMap()["2020-10-05"] << std::endl;
}   