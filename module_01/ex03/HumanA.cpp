/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 05:42:30 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/21 06:26:48 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA(): weapon(0)
// {
// 	// this->_weapon = nullptr;
// 	return ;
// }

HumanA::HumanA(std::string name, Weapon & weap): _weapon(weap)
{
	this->_name = name;
	this->_weapon = weap;
	return ;
}

HumanA::~HumanA()
{
	return ;
}

Weapon	HumanA::getWeapon()
{
	return (this->_weapon);
}

std::string	HumanA::getName()
{
	return (this->_name);
}

// void	HumanA::setWeapon(Weapon weapon)
// {
// 	this->_weapon = weapon;
// }

void HumanA::attack()
{
	std::cout << this->getName() << ": attacks with their "	<< this->_weapon.getType() << std::endl;
}
