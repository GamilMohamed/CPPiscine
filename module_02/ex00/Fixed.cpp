/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:21:18 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/22 21:19:37 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(Fixed const & a)
{
	(*this) = a;
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::Fixed()
{
	this->_number = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=(Fixed const &s)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_number = s.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Fixed::setRawBits(int const raw)
{
	this->_number = raw;
}

int	Fixed::getRawBits() const 
{
	std::cout << __func__ << " member function called" << std::endl;
	return (this->_number);
}