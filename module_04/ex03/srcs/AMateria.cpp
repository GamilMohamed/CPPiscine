/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:45:57 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/29 22:07:56 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : _type(type) {
	std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy) : _type(copy.getType()) {
	std::cout << "AMateria Copy constructor called" << std::endl;
	return;
}

AMateria::~AMateria(void) {
	std::cout << "AMateria Default constructor called" << std::endl;
	return;
}

void	AMateria::use(ICharacter& target) { 
	std::cout << "* default message for " + target.getName() + " *" << std::endl;
	return;
}

const std::string	&AMateria::getType(void) const
{
	return this->_type;
}
