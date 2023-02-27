/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:21:18 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/22 21:19:37 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ): _hitPts(10), _nrgPts(10), _atkPts(0)
{
	std::cout << "Constructor called" << std::endl;
	this->_name = name;
	return ;
}

ClapTrap::ClapTrap()
{
	std::cout << "Default Constructor called" << std::endl;
	this->_name = "Moha";
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout << _name << " attacks " << target << " causing " << _atkPts << " points of damage!" << std::endl;
	std::cout << _name << " energy is at " << (_nrgPts -= 1) << "!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " took " << amount << " damage." << std::endl;
	std::cout << _name << " is at " << _nrgPts << " energy points !" << std::endl;
	// getHitPts() -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	(void)amount;
}

unsigned int	ClapTrap::getAtkDmg() const
{
	return (this->_atkPts);
}

unsigned int	ClapTrap::getHitPts() const
{
	return (this->_hitPts);
}

std::string		ClapTrap::getName() const
{
	return (this->_name);
}