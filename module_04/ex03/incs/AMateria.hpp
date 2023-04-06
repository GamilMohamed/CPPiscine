/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:35:39 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/29 22:08:50 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMETERIA_HPP
# define AMETERIA_HPP

#include <string>
#include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		const std::string	_type;
	public:
		AMateria(const std::string &type);
		AMateria(const AMateria &copy);
		virtual	~AMateria(void);
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter& target);
		const std::string	&getType() const;
};

#endif
