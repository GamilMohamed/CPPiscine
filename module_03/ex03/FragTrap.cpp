/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:58:35 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/07 01:56:16 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void  FragTrap::highFivesGuys( void )
{
   std::cout << "Please give me a high five !" << std::endl;
}

FragTrap::FragTrap(void) : ClapTrap("FragTrap")
{
   std::cout << "Void FragTrap from Claptrap" << std::endl;
   _hitPts = 100;
   _nrgPts = 100;
   _atkPts = 30;
   _name = "FragTrap";
}

void FragTrap::displayIdentity( void )
{
   std::cout << "Frag _name = " << _name << std::endl;
   std::cout << "Frag _atkPts = " << _atkPts << std::endl;
   std::cout << "Frag _hitPts = " << _hitPts << std::endl;
   std::cout << "Frag _nrgPts = " << _nrgPts << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
   std::cout << "New ScavTrap from Claptrap" << std::endl;
   _hitPts = 100;
   _nrgPts = 100;
   _atkPts = 30;
   _name = name;
}

FragTrap::FragTrap(FragTrap const &s)
{
   std::cout << "FragTrap copy constructor called" << std::endl;
   *this = s;
}

FragTrap::~FragTrap()
{
}

FragTrap &FragTrap::operator=(FragTrap const &s)
{
   std::cout << "FragTrap assignment operator called" << std::endl;
   _name = s._name;
   _hitPts = s._hitPts;
   _nrgPts = s._nrgPts;
   _atkPts = s._atkPts;
   return *this;
}