/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 00:26:18 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/10 23:43:07 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	 _type = "Cat";
}


Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &s)
{
	std::cout << "Copy assignement opeator called" << std::endl;
	this->_type = s._type;
	return (*this);
}
