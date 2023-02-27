/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 03:55:27 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/22 04:36:17 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	static const char *inputs[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};

	if (ac != 2)
		return (1);
	
	Harl exec;
	std::string str = av[1];
	for (int i = 0; i < 4; i++)
		if (str == inputs[i])
			return (exec.complain(i), 0);
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (1);
}