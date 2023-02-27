/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:21:18 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/24 06:02:25 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// constructor

Fixed::Fixed()
{
	this->_number = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed & Fixed::operator=(Fixed const &s)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_number = s.getRawBits();
	return (*this);
}

Fixed::Fixed(int const n)
{
    std::cout << "Int constructor called" << std::endl;
    this->_number = n << this->_fracbits;
}

Fixed::Fixed( float const f )
{
    std::cout << "Float constructor called" << std::endl;
    this->_number = roundf(f * (1 << this->_fracbits));
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::toInt() const
{
	return (this->_number >> this->_fracbits);
}

std::ostream& operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

float		Fixed::toFloat() const
{
	return (static_cast<float>(this->_number) / static_cast<float>(1 << this->_fracbits));
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