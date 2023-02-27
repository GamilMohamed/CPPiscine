/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 05:29:06 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/21 05:48:05 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		const std::string	getType();
		void		setType(std::string);
		Weapon(std::string weapon);
		~Weapon();
};

#endif