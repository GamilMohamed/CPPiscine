/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 03:25:12 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/21 04:41:45 by mgamil           ###   ########.fr       */
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
		void 	announce(void);
		Zombie*	newZombie(std::string name);
		void	randomChump(std::string name);
		Zombie(void);
		~Zombie(void);
		std::string get_name();
		void 		set_name(std::string name);

	private:
		std::string _name;
};

#endif
