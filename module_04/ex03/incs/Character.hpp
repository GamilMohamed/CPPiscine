/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:52:05 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/22 19:52:25 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class	Character : public ICharacter {

	private:
		const std::string	_name;
		AMateria			*_inventory[4];
		Character(void);
	public:

		Character(const std::string name);
		Character(const Character &copy);
		virtual	~Character(void);
		Character	&operator=(const Character &rhs);
		virtual void	equip(AMateria *m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter& target);
		virtual const std::string	&getName(void) const;
		AMateria					*getInventoryI(const int index) const;
};

#endif
