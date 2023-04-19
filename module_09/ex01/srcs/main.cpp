/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:14:22 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/19 10:04:42 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
#include <cmath>
#include <iostream>
#include <stack>
#include "Colors.hpp"
#include "RPN.hpp"

int	prin( std::string arg , RPN &calc)
{
	int a, b;
	const char *ret;
	char str[] = "+-*/";
	int (RPN::*func)(int, int);
	std::stack<int> stk(calc.getStk());

	for (int i = 0; arg[i]; i++)
	{
		if ((ret = strchr(str, arg[i])))
		{
			func = calc.ft[ret - str];
			if (stk.empty())
				return (std::cout << "Error\n", exit(1), -1);
			a = stk.top();
			stk.pop();
			if (stk.empty())
				return (std::cout << "Error\n", exit(1), -1);
			b = stk.top();
			stk.pop();
			stk.push((calc.*func)(a, b));
		}
		else if (arg[i] != ' ')
			stk.push(arg[i] - '0');
	}
	return (stk.top());
}

int isAcceptable( std::string str )
{
	return str.find_first_not_of("0123456789 +-/*") == std::string::npos;
}

int	main(int ac, char **av)
{
	if (ac != 2 || !isAcceptable(av[1]))
		return (std::cout << "Error" << std::endl, 0);
	RPN calc;
	std::cout << prin(av[1], calc) << std::endl;
}