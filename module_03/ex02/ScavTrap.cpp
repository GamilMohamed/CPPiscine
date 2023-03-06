/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 00:55:48 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/06 02:07:02 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
   std::cout << "New ScavTrap from Claptrap" << std::endl;
   _hitPts = 100;
   _nrgPts = 50;
   _atkPts = 20;
   _name = name;
}

ScavTrap::ScavTrap(ScavTrap const &s)
{
   std::cout << "ScavTrap copy constructor called" << std::endl;
   *this = s;
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode !" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &s)
{
	this->_hitPts = s._hitPts;
	this->_atkPts = s._atkPts;
	this->_nrgPts = s._nrgPts;
	this->_name = s._name;
	return (*this);
}

