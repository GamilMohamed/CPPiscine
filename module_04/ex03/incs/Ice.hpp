/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:06:28 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/29 22:06:31 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "Character.hpp"

class	Ice : public AMateria {

	public:

		Ice(void);
		Ice(const Ice &copy);
		virtual	~Ice(void);

		Ice	&operator=(const Ice &);

		virtual Ice		*clone(void) const;
		virtual void	use(ICharacter &target);
};

#endif
