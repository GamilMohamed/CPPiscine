/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:21:05 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/06 02:05:24 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap Moha("Moha");
	// ScavTrap Maxou("Maxou");

	ScavTrap Maxou;

	Maxou = Moha;	
	Moha.attack("Maxou");
	Maxou.takeDamage(Moha.getAtkDmg());
	// Moha.attack("Maxou");
	// Maxou.takeDamage(Moha.getAtkDmg());
	// Moha.attack("Maxou");
	// Moha.attack("Maxou");
	// Maxou.takeDamage(Moha.getAtkDmg());
	// Moha.attack("Maxou");
	// Maxou.takeDamage(Moha.getAtkDmg());
	// Maxou.beRepaired(5);
	// Moha.attack("Maxou");
	// Maxou.takeDamage(Moha.getAtkDmg());
	// Moha.attack("Maxou"); 
	// Maxou.takeDamage(Moha.getAtkDmg());
	// Moha.attack("Maxou");
	// Maxou.takeDamage(Moha.getAtkDmg());
	// Moha.attack("Maxou");
	// Maxou.takeDamage(Moha.getAtkDmg());
	// Moha.attack("Maxou");
	// Maxou.takeDamage(Moha.getAtkDmg());
	// Maxou.beRepaired(1);

	return (0);
}