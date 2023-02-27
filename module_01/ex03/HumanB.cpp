/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 05:42:30 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/21 19:39:29 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::setWeapon(Weapon & weapon)
{
	this->_weapon = & weapon;
}

std::string	HumanB::getName()
{
	return (this->_name);
}

void HumanB::attack()
{
	if (this->_weapon)
		std::cout << this->getName() << ": attacks with their "	<< this->_weapon->getType() << std::endl;
	else
		std::cout << this->getName() << ": attacks with their hands!!" << std::endl;
}
