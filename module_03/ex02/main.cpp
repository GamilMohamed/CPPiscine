/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:21:05 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/06 19:02:33 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap Moha("Moha");

	ScavTrap Maxou;

	Maxou = Moha;	
	Moha.attack("Maxou");
	Maxou.takeDamage(Moha.getAtkDmg());
	FragTrap Aya;
	FragTrap Test;
	Aya.attack("Test");
	Test.takeDamage(Aya.getAtkDmg());

	return (0);
}