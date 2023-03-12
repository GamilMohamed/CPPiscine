/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:26:34 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/10 23:44:58 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

Animal::Animal()
{
	std::cout << "Animal" << " constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal" << " constructor called" << std::endl;
}

void Animal::makeSound() const
{
	if (_type == "Cat")
		std::cout << "Miaooowwww" << std::endl;
	else if (_type == "Dog")
		std::cout << "WAFF WAFFF" << std::endl;
}


std::string Animal::getType( void ) const
{
	return (_type);
}