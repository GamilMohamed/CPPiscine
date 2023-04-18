/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:26:58 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/18 02:18:10 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Error.h"
#include "BitcoinExchange.hpp"

#define DAY 2
#define MONTH 1
#define YEAR 0

void	check_value(std::string string)
{
	float		nb = 0;
	int i = 0;
	std::string cyan = CYAN;
	std::string blue = BLUE;
	std::string green = GREEN;
	std::string yellow = YELLOW;
	
	if (string[i] == ' ')
		i++;	
	if (string[i] == ' ')
		throw std::invalid_argument(green + BADINPUT + string);
	if (!isdigit(string[i]) && '-' != string[i])
		throw std::invalid_argument(cyan + BADINPUT + string);
	while (isdigit(string[i]))
		i++;
	// if (string[i] == '.' && !isdigit(string[i + 1]))
		// throw std::invalid_argument(yellow + BADINPUT + string);
	nb = atof(string.c_str());
	if (nb < 0)
		throw std::underflow_error(NEGATIVE);
	if (nb > 1000)
		throw std::overflow_error(LARGENUMBER);
}

void check_date(t_date date, std::string str)
{
	bool bissextile = false;
	t_date max = { 9999, 12, 31 };
	std::string byellow = BYELLOW;
	std::string reset = RESET;

	if (date.year % 4 == 0)
		bissextile = true;
	if (date.month < 8)
		max.day = (date.month % 2 == 0) ? 30 : 31;
	if (date.month == 2)
		max.day = (bissextile) ? 29 : 28;
	if (date.year > max.year || date.month > max.month || date.day > max.day)
		throw std::invalid_argument(byellow + BADINPUT + str + reset);
}

void print_date(t_date date)
{
	std::cout << BYELLOW << date.year << "-" << date.month << "-" << date.day << RESET << std::endl;
}

void	parse(std::string& string)
{
	int					i(-1), type(0);
	long long int		nb(0);
	struct t_date		date = {0, 0, 0};

	if (string.empty())
		throw std::invalid_argument(BADINPUT + string);
	while (string[++i])
	{
		if (string[i] == ' ' && type == DAY)
			i++;
		else if (string[i] == '-' && i != 4 && type == YEAR)
			throw std::invalid_argument(BADINPUT + string);
		if (string[i] == '-')
		{
			switch (type)
			{
				case YEAR:
					date.year = nb;
					break;
				case MONTH:
					date.month = nb;
					break;
			}
			if (nb == 0 || (i != 4 && i != 7 && i != 10))
				throw std::invalid_argument(BADINPUT + string);
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
		{
			nb = nb * 10 + (string[i] - '0');
			if ((nb > 12 && type == MONTH ) || (nb > 31 && type == DAY))
				throw std::invalid_argument(BADINPUT + string);
		}
	}
	throw std::invalid_argument(BADINPUT + string);
}

// void	parse(std::string& string)
// {
// 	int					i(-1), type(0);
// 	long long int		nb(0);

// 	if (string.empty())
// 		throw std::invalid_argument(BADINPUT + string);
// 	while (string[++i])
// 	{
// 		if (string[i] == ' ' && type == DAY)
// 			i++;
// 		else if (string[i] == '-' && i != 4 && type == YEAR)
// 			throw std::invalid_argument(BADINPUT + string);
// 		if (string[i] == '-')
// 		{
// 			if (nb == 0 || (i != 4 && i != 7 && i != 10))
// 				throw std::invalid_argument(BADINPUT + string);
// 			nb = 0;
// 			i++;
// 			type++;
// 		}
// 		if (string[i] == '|' && type == DAY)
// 			return (check_value(&string[++i]));
// 		else if (isdigit(string[i]))
// 		{
// 			nb = nb * 10 + (string[i] - '0');
// 			if ((nb > 12 && type == MONTH ) || (nb > 31 && type == DAY))
// 				throw std::invalid_argument(BADINPUT + string);
// 		}
// 	}
// 	throw std::invalid_argument(BADINPUT + string);
// }

void	readfile(std::ifstream& file, BitcoinExchange& btc)
{
	std::string		string;
	
	(void)btc;
	getline(file, string);
	if (string != "date | value")
		std::cout << "First line is not data | value !" << std::endl;
	while (getline(file, string))
	{
		try {
			parse(string);
			std::cout << string << std::endl;
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
	btc.print();
	std::cout << btc.getMap()["2020-10-05"] << std::endl;
}   