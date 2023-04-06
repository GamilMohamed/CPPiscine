/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:06:32 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/29 22:06:34 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "Character.hpp"

class	Cure : public AMateria {

	public:

		Cure(void);
		Cure(const Cure &copy);
		virtual	~Cure(void);

		Cure	&operator=(const Cure &);

		virtual Cure	*clone(void) const;
		virtual void	use(ICharacter &target);
};

#endif
