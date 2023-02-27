/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:27:35 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/21 23:45:10 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			std::cout << (char)toupper(av[i][j++]);
	}
	return (0);
}