/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:26:58 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/17 12:30:52 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Error.h"

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
	if (string[i] == '.' && !isdigit(string[i + 1]))
		throw std::invalid_argument(yellow + BADINPUT + string);
	nb = atof(string.c_str());
	if (nb < 0)
		throw std::underflow_error(NEGATIVE);
	if (nb > 1000)
		throw std::overflow_error(LARGENUMBER);
}

void	parse(std::string& string)
{
	int					i(-1), type(0);
	long long int		nb(0);

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
			if (nb == 0 || (i != 4 && i != 7 && i != 10))
				throw std::invalid_argument(BADINPUT + string);
			nb = 0;
			i++;
			type++;
		}
		if (string[i] == '|' && type == DAY)
			return (check_value(&string[++i]));
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
// 	int					i(0), type(0);
// 	long long int		nb(0);

// 	if (string.empty())
// 		throw std::invalid_argument(BADINPUT + string);
// 	while (string[i])
// 	{
// 		if (!isdigit(string[i]))
// 		{
// 			if (string[i] == ' ' && type == DAY)
// 				i++;
// 			if (string[i] == '-' && i != 4 && type == YEAR)
// 				throw std::overflow_error("ERROR YEAR");
// 			if (string[i] == '-')
// 			{
// 				if (i != 4 && i != 7 && i != 10)
// 					throw std::overflow_error("ERROR ARG");
// 				if (nb == 0)
// 					throw std::overflow_error("ERROR ZERO");
// 				nb = 0;
// 				i++;
// 				type++;
// 			}
// 			else if (string[i] == '|')
// 				return (check_value(&string[++i]));
// 			else
// 				throw std::invalid_argument(BADINPUT + string);
// 		}
// 		nb = nb * 10 + (string[i++] - '0');
// 		if (nb > 12 && type == MONTH)
// 			throw std::overflow_error("ERROR MONTH");
// 		if (nb > 31 && type == DAY)
// 			throw std::overflow_error("ERROR DAY");
// 	}
// }

void	readfile(std::ifstream& file)
{
	std::string		string;
	
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


int	main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << BMAGENTA << WRONGFILE << RESET << std::endl, 1);
	std::ifstream ifs(av[1]);
	if (!ifs)
		return (std::cout << RED << WRONGFILE << RESET << std::endl, 1);
	readfile(ifs);
}   