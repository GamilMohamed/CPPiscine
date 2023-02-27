/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:52:33 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/22 04:42:26 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
  private:
	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);
  public:
	void		(Harl::*ft[4])(void);
	std::string	index[4];
	void		complain( std::string level );
	Harl();
	~Harl();
};

#endif