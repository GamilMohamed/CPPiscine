/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 05:43:32 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/21 06:34:20 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon   	*_weapon;
	public:
		Weapon	getWeapon();
		std::string	getName();
		void	setWeapon(Weapon & weapon);
		HumanB(std::string);
		~HumanB();
		void	attack();
};

#endif

