/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:21:22 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/22 21:17:52 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
  private:
	// static const unsigned int	_hitPts = 10;
	// static const unsigned int	_nrgPts = 10;
	// static const unsigned int	_atkPts = 0;
	unsigned int	_hitPts;
	unsigned int	_nrgPts;
	unsigned int	_atkPts;
	std::string		_name;

  public:
	ClapTrap( std::string name );
	ClapTrap();
	~ClapTrap();
	unsigned int	getHitPts( void ) const;
	unsigned int	getAtkDmg( void ) const;
	std::string		getName() const;
	void			attack(const std::string &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

#endif