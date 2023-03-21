/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 00:49:55 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/14 20:08:28 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	 _type = "Dog";
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &s)
{
	std::cout << "Copy assignement opeator called" << std::endl;
	this->_type = s._type;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Waoof WOFFFFF" << std::endl;
}
