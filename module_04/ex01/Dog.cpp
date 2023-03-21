/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 00:49:55 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/14 20:44:19 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog( void ) : Animal()
{
	_brain = new Brain;
	std::cout << "Dog constructor called" << std::endl;
	 _type = "Dog";
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
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

Dog::Dog(const Dog &rhs)
{
	_type = rhs.getType(	);
	std::cout << "Dog Copy constructor operator called" << std::endl;
}
