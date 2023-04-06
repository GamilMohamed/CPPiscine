/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 21:58:35 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/29 22:01:51 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character Constructor called for " << name << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return;
}

Character::Character(const Character &copy) : _name(copy.getName())
{
	std::cout << "Character Copy constructor called for " << this->_name << std::endl;
	*this = copy;
	return;
}

Character::~Character(void)
{
	std::cout << "Character Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
	return;
}

Character	&Character::operator=(const Character &rhs)
{
	if (this != &rhs) {
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete _inventory[i];
			if (rhs.getInventoryI(i))
				this->_inventory[i] = rhs.getInventoryI(i)->clone();
		}
	}
	return *this;
}

void	Character::equip(AMateria *m)
{
	if (m)
		for (int i = 0; i < 4; i++)
			if (!this->_inventory[i])
			{
				this->_inventory[i] = m;
				return;
			}
	delete m;
	return;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
	return;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 4 && this->_inventory[idx])
			this->_inventory[idx]->use(target);
}

const std::string	&Character::getName(void) const
{
	return this->_name;	
}

AMateria	*Character::getInventoryI(const int index) const
{
	return this->_inventory[index];	
}
