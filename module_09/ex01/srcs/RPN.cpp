/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 07:55:33 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/19 08:49:52 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void ) { std::cout << "RPN constructor called" << std::endl; 
	this->ft[0] = &RPN::_add;
	this->ft[1] = &RPN::_substract;
	this->ft[2] = &RPN::_multiply;
	this->ft[3] = &RPN::_divide;
}

RPN::~RPN( void ) { std::cout << "RPN destructor called" << std::endl; }

int RPN::_add(int a, int b) { return (b + a); }
int RPN::_substract(int a, int b) { return (b - a); }
int RPN::_multiply(int a, int b) { return (b * a); }
int RPN::_divide(int a, int b)
{
	if (a)
	return (b / a);
	std::cout << "Error: Division by zero." << std::endl;
	exit(1);
}

RPN::RPN( RPN const & src )
{
	std::cout << "RPN copy constructor called" << std::endl;
	*this = src;
}

RPN & RPN::operator=( RPN const & rhs )
{
	std::cout << "RPN assignment operator called" << std::endl;
	if (this != &rhs)
		_stk = rhs._stk;
	return *this;
}
