/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 22:51:00 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/22 03:46:46 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl test = Harl();

	test.complain("DEBUG");
	test.complain("INFO");
	test.complain("WARNING");
	test.complain("ERROR");
	return (0);
}