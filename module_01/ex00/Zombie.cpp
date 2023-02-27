/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:07:38 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/21 04:45:21 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}

Zombie *Zombie::newZombie(std::string name)
{
	Zombie *zomb = new Zombie;
	zomb->set_name(name);
	return (zomb);
}

void Zombie::randomChump(std::string name)
{
	Zombie zomb;

	zomb.set_name(name);
	std::cout << zomb._name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::get_name()
{
	return (this->_name);
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
	// return (this->_name);
}
