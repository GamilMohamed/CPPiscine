/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 05:26:02 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/24 06:24:52 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

#define FALSE     "\033[0m\033[41mfalse\033[0m"
#define TRUE   "\033[0m\033[42mtrue\033[0m"

int	main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(3);
	Fixed d(5);

	std::cout << "a is fixed at " << a << std::endl;
	std::cout << "b is fixed at " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	
	std::cout << "c is fixed at " << c << std::endl;
	std::cout << "d is fixed at " << d << std::endl;

	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "c - d = " << c - d << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "c / d = " << c / d << std::endl;
	
	std::cout << "c >= d " << ((c >= d) ? TRUE : FALSE ) << std::endl;
	std::cout << "c > d " << ((c > d) ? TRUE : FALSE ) << std::endl;
	std::cout << "c < d " << ((c < d) ? TRUE : FALSE ) << std::endl;
	std::cout << "c <= d " << ((c <= d) ? TRUE : FALSE ) << std::endl;
	std::cout << "c == d " << ((c == d) ? TRUE : FALSE ) << std::endl;
	std::cout << "c != d " << ((c != d) ? TRUE : FALSE ) << std::endl;

	return (0);
}
