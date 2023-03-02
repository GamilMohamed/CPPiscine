/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:21:05 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/01 20:19:15 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Moha("Moha");
	ClapTrap Maxou("Maxou");
	
	Moha.attack("Maxou");
	Maxou.takeDamage(100);
	Moha.attack("Maxou");
	Maxou.takeDamage(Moha.getAtkDmg());
	Moha.attack("Maxou");
	Maxou.takeDamage(Moha.getAtkDmg());
	Moha.attack("Maxou");
	Maxou.takeDamage(Moha.getAtkDmg());
	Moha.attack("Maxou");
	Maxou.takeDamage(Moha.getAtkDmg());
	Maxou.beRepaired(5);
	Moha.attack("Maxou");
	Maxou.takeDamage(Moha.getAtkDmg());
	Moha.attack("Maxou"); 
	Maxou.takeDamage(Moha.getAtkDmg());
	Moha.attack("Maxou");
	Maxou.takeDamage(Moha.getAtkDmg());
	Moha.attack("Maxou");
	Maxou.takeDamage(Moha.getAtkDmg());
	Moha.attack("Maxou");
	Maxou.takeDamage(Moha.getAtkDmg());
	Maxou.beRepaired(1);

	return (0);
}