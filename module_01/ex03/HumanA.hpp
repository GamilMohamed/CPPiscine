/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 05:42:38 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/21 06:27:08 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon &  	_weapon;
	public:
		Weapon	getWeapon();
		std::string	getName();
		void setWeapon(Weapon weapon);
		HumanA(std::string, Weapon & weap);
		~HumanA();
		void	attack();
};

#endif

