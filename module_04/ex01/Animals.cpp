/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:26:34 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/14 01:57:10 by mgamil           ###   ########.fr       */
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
	std::cout << "Animal is making sound !" << std::endl;
}


std::string Animal::getType( void ) const
{
	return (_type);
}