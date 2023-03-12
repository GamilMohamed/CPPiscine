/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:59:52 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/07 21:45:01 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
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
