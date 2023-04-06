/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:50:29 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/29 21:57:52 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource {

	private:

		AMateria	*_backup[4];

	public:

		MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		virtual	~MateriaSource(void);

		MateriaSource	&operator=(const MateriaSource &rhs);

		virtual void		learnMateria(AMateria *m);
		virtual AMateria	*createMateria(const std::string &type);

		AMateria	*getBackupI(const int index) const;
};

#endif