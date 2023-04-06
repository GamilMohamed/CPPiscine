/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:04:04 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/29 22:13:46 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice Default constructor called" << std::endl;
	return;
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	std::cout << "Ice Copy constructor called" << std::endl;
	return;
}

Ice::~Ice(void)
{
	std::cout << "Ice Default constructor called" << std::endl;
	return;
}

Ice	&Ice::operator=(const Ice &)
{
	return *this;
}

Ice		*Ice::clone(void) const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " + target.getName() +  " *" << std::endl;
	return;
}
