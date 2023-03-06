/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 00:56:11 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/06 19:01:14 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"

class ScavTrap : public ClapTrap
{
  private:
  public:
	ScavTrap(ScavTrap const &s);
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
  	ScavTrap &operator=(ScavTrap const &s);
	void guardGate(void);
};

#endif