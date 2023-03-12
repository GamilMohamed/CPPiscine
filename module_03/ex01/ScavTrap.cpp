/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 00:55:48 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/07 21:05:16 by mgamil           ###   ########.fr       */
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


void	ScavTrap::attack(const std::string &target)
{
	if (!_nrgPts || !_hitPts)
	{
		std::cout << "Scav " << _name << " can't attack !" << std::endl;
		return ;
	}
	std::cout << RED << "Scav " << _name << " attacks " << target << " causing " << _atkPts << " points of damage!" << RESET << std::endl;
	std::cout << GREEN << "Scav " << _name << " energy is at " << (_nrgPts -= 1) << "!" << RESET << std::endl;
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

