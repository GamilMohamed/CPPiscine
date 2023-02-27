/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:21:18 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/24 06:23:55 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// constructor

Fixed   &Fixed::min(Fixed &a, Fixed &b)
{
    if (a._number < b._number)
        return (a);
    return (b);
}

Fixed   &Fixed::max(Fixed &a, Fixed &b)
{
    if (a._number > b._number)
        return (a);
    return (b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a._number < b._number)
        return (a);
    return (b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a._number > b._number)
        return (a);
    return (b);
}

Fixed::Fixed()
{
	this->_number = 0;
	return ;
}

Fixed::Fixed( Fixed const & src )
{
    *this = src;
}

Fixed::Fixed(int const n)
{
    this->_number = n << this->_fracbits;
}

Fixed::Fixed( float const f )
{
    this->_number = roundf(f * (1 << this->_fracbits));
}

// destructor

Fixed::~Fixed()
{
	return ;
}

// conversion

int		Fixed::toInt() const
{
	return (this->_number >> this->_fracbits);
}

float		Fixed::toFloat() const
{
	return (static_cast<float>(this->_number) / static_cast<float>(1 << this->_fracbits));
}

// setters n getters 

void	Fixed::setRawBits(int const raw)
{
	this->_number = raw;
}

int	Fixed::getRawBits() const 
{
	return (this->_number);
}

// operators

std::ostream& operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

Fixed&	Fixed::operator=(Fixed const &s)
{
	this->_number = s.getRawBits();
	return (*this);
}

bool	Fixed::operator==(Fixed const &s)
{
	if (this->_number == s.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &s)
{
	if (this->_number != s.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &s)
{
	if (this->_number >= s.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &s)
{
	if (this->_number <= s.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>(Fixed const &s)
{
	if (this->_number > s.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &s)
{
	if (this->_number < s.getRawBits())
		return (true);
	return (false);
}

Fixed   Fixed::operator+(Fixed const &val)
{
    return (Fixed(this->toFloat() + val.toFloat()));
}

Fixed   Fixed::operator-(Fixed const &val)
{
    return (Fixed(this->toFloat() - val.toFloat()));
}

Fixed   Fixed::operator/(Fixed const &val)
{
    return (Fixed(this->toFloat() / val.toFloat()));
}

Fixed   Fixed::operator*(Fixed const &val)
{
    return (Fixed(this->toFloat() * val.toFloat()));
}

// Fixed& Fixed::operator++( void )
// {
//     _number++;
//     return (*this);
// }

Fixed Fixed::operator++( int )
{
    Fixed   tmp(*this);

    tmp.setRawBits(_number++);
    return (tmp);
}

Fixed& Fixed::operator++()
{
    _number += 1;
    return (*this);
}


Fixed Fixed::operator--( int )
{
    Fixed   tmp(*this);

    tmp.setRawBits(_number--);
    return (tmp);
}
