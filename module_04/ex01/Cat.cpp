/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 00:26:18 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/14 20:36:59 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void ) : Animal()
{
	_brain = new Brain;
	std::cout << "Cat constructor called" << std::endl;
	 _type = "Cat";
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat &Cat::operator=(Cat const &s)
{
	std::cout << "Copy assignement opeator called" << std::endl;
	this->_type = s._type;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaaaooowwww" << std::endl;
}

Cat::Cat(const Cat &rhs)
{
	_type = rhs.getType();
	std::cout << "Cat Copy constructor operator called" << std::endl;
}
