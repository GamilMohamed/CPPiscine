/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:02:50 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/29 22:14:03 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
	std::cout << "Cure Default constructor called" << std::endl;
	return;
}

Cure::Cure(const Cure &copy) : AMateria(copy) {
	std::cout << "Cure Copy constructor called" << std::endl;
	return;
}

Cure::~Cure(void) {
	std::cout << "Cure Default constructor called" << std::endl;
	return;
}

Cure	&Cure::operator=(const Cure &)
{
	return *this;
}

Cure	*Cure::clone(void) const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " + target.getName() +  "'s wounds *" << std::endl;
	return;
}
