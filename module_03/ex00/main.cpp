/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:21:05 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/28 05:28:24 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Bob("Bob");
	ClapTrap Billy("Billy");
	
	Bob.attack("Billy");
	Billy.takeDamage(Bob.getAtkDmg());
	Bob.attack("Billy");
	Billy.takeDamage(100);
	Bob.attack("Billy");
	Billy.takeDamage(Bob.getAtkDmg());
	Bob.attack("Billy");
	Billy.takeDamage(Bob.getAtkDmg());
	Bob.attack("Billy");
	Billy.takeDamage(Bob.getAtkDmg());
	Bob.attack("Billy");
	Billy.takeDamage(Bob.getAtkDmg());
	Bob.attack("Billy");
	Billy.takeDamage(Bob.getAtkDmg());
	Bob.attack("Billy");
	Billy.takeDamage(Bob.getAtkDmg());
	Bob.attack("Billy");
	Billy.takeDamage(Bob.getAtkDmg());
	Bob.attack("Billy");
	Billy.takeDamage(Bob.getAtkDmg());
	Bob.attack("Billy");
	Billy.takeDamage(Bob.getAtkDmg());
	Billy.beRepaired(12);
	Billy.beRepaired(1);

	return (0);
}