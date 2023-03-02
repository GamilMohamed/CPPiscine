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

ClapTrap::ClapTrap( std::string name ): _hitPts(10), _nrgPts(10), _atkPts(0), _name(name)
{
	std::cout << "Constructor called" << std::endl;

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
	if (!_nrgPts || !_hitPts)
	{
		std::cout << _name << " can't attack !" << std::endl;
		return ;
	}
	std::cout << RED << _name << " attacks " << target << " causing " << _atkPts << " points of damage!" << RESET << std::endl;
	std::cout << GREEN << _name << " energy is at " << (_nrgPts -= 1) << "!" << RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPts <= 0)
	{
		std::cout << _name << " can't take anymore damage !" << std::endl;
		return ;
	}
	std::cout << YELLOW << _name << " took " << amount << " damage." << RESET << std::endl;
	if (amount > _hitPts)
		amount = _hitPts;
	std::cout << MAGENTA << _name << " was at " << _hitPts << ", ";
	std::cout << "he is now at " << (_hitPts -= amount) << RESET << std::endl;
	// getHitPts() -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_nrgPts)
	{
		std::cout << _name << " can't get repaired !" << std::endl;
		return ;
	}
	std::cout << BLUE << _name << " wants to get repaired, of " << amount << " he has " << this->_hitPts << "." << std::endl;
	if (_hitPts == 10)
		std::cout << RED << _name << " is already at maximum!" << RESET << std::endl;
	else if (amount >= 10 && _hitPts < 10)
		std::cout << BRED << _name << " can only be repaired of " << (10 - _hitPts) << "!" << RESET << std::endl;
	else if (amount + _hitPts > 10)
		std::cout << BRED << _name << " can have only a maximum of 10 hit points !!" << RESET << std::endl;
	else
	{
		std::cout << _name << " is getting repaired of " << (amount) << "!" << std::endl;
		_hitPts += amount;
		std::cout << _name << " is now at " << (_hitPts) << "!" << RESET << std::endl;
		_nrgPts -= 1;
	}
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