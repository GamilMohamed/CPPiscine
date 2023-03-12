/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:26:04 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/07 21:45:14 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

void  DiamondTrap::whoAmI ( void )
{
   std::cout << "DiamondTrap name : " << _name << std::endl;
   std::cout << "ClapTrap DiamondTrap name : " << this->ClapTrap::_name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &s)
{
   std::cout << "DiamondTrap copy constructor called" << std::endl;
   *this = s;
   std::cout << "Creating a new copied DiamondTrap named " << _name << std::endl;
}

DiamondTrap::DiamondTrap( void ) : ClapTrap("Default_clap_name"), FragTrap("Default_clap_name"), ScavTrap("Default_clap_name")
{
   std::cout << "Creating a new DiamondTrap heritating from ScavTrap and FragTrap" << std::endl << std::endl;
   _name = "Default_clap_name";
   _hitPts = this->FragTrap::_hitPts;
   _nrgPts = this->ScavTrap::_nrgPts;
   _atkPts = this->FragTrap::_atkPts;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
   std::cout << "Creating a new DiamondTrap heritating from ScavTrap and FragTrap" << std::endl << std::endl;
   _name = name + "_clap_name";
   _hitPts = this->FragTrap::_hitPts;
   _nrgPts = this->ScavTrap::_nrgPts;
   _atkPts = this->FragTrap::_atkPts;
   std::cout << RED << this->ScavTrap::_nrgPts << " -> " << _nrgPts << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
   std::cout << std::endl << "DiamondTrap destructor" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &s)
{
   std::cout << "DiamondTrap assignment operator called" << std::endl;
   _name = s._name;
   _hitPts = s._hitPts;
   _nrgPts = s._nrgPts;
   _atkPts = s._atkPts;
   return *this;
}