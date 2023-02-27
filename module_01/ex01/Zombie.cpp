/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:07:38 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/21 05:09:32 by mgamil           ###   ########.fr       */
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

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie *zomb = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		zomb[i].setName(name);	
		zomb[i].announce();
	}
	// delete[] zomb;
	return (zomb);
}

Zombie *Zombie::newZombie(std::string name)
{
	Zombie *zomb = new Zombie;
	zomb->setName(name);
	return (zomb);
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::randomChump(std::string name)
{
	Zombie zomb;

	zomb.setName(name);
	std::cout << zomb._name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName()
{
	return (this->_name);
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}
