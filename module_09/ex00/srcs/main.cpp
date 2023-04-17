/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:26:58 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/17 04:52:33 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Error.h"

#define DAY 2
#define MONTH 1
#define YEAR 0

void	check_value(char * string)
{
	float		nb = 0;
	
	nb = atof(string);
	if (nb < 0)
		throw std::underflow_error(NEGATIVE);
	if (nb > 1000)
		throw std::overflow_error(LARGENUMBER);
}

void	parse(std::string& string)
{
	int					i(0), type(0);
	long long int		nb(0);

	if (string.empty())
		throw std::invalid_argument(BADINPUT + string);
	while (string[i])
	{
		if (string[i] == ' ' && type == DAY)
			i++;
		if (string[i] == '-' && i != 4 && type == YEAR)
			throw std::overflow_error("ERROR YEAR");
		if (string[i] == '-')
		{
			if (i != 4 && i != 7 && i != 10)
				throw std::overflow_error("ERROR ARG");
			if (nb == 0)
				throw std::overflow_error("ERROR ZERO");
			nb = 0;
			i++;
			type++;
		}
		if (string[i] == '|')
			return (check_value(&string[++i]));
		// else
		// {
			// std::cout << CYAN << string[i] << RESET << std::endl;
			// throw std::invalid_argument(BADINPUT + string);
		// }
		if (isdigit(string[i]))
		{
			nb = nb * 10 + (string[i] - '0');
			if (nb > 12 && type == MONTH)
				throw std::overflow_error("ERROR MONTH");
			if (nb > 31 && type == DAY)
				throw std::overflow_error("ERROR DAY");
		}
		i++;
	}
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
		std::cout << string << std::endl;
		try {
			parse(string);
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