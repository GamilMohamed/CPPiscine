/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:59:52 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/06 19:05:03 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
   private:
   public:
      FragTrap(FragTrap const & s);
      FragTrap();
      FragTrap(std::string name);
      ~FragTrap();
      FragTrap &operator=(FragTrap const & s);
      void  highFivesGuys(void);
};

#endif
