/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 03:25:12 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/21 05:09:09 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <stdlib.h>
# include <string.h>

class Zombie
{
	public:
		void 	announce();
		Zombie*	newZombie(std::string name);
		void	randomChump(std::string name);
		Zombie(void);
		~Zombie(void);
		std::string getName();
		void 		setName(std::string name);
		Zombie* zombieHorde( int N, std::string name );
	private:
		std::string _name;
};

#endif
