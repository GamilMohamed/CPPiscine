/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:47:34 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/22 19:49:33 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	std::cout << "Materia Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_backup[i] = NULL;
	return;
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	std::cout << "Materia Copy constructor called" << std::endl;
	*this = copy;
	return;
}

MateriaSource::~MateriaSource(void) {
	std::cout << "Materia Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_backup[i];
	return;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs) {
	if (this != &rhs)
		for (int i = 0; i < 4; i++) {
			if (this->_backup[i])
				delete _backup[i];
			if (rhs.getBackupI(i))
				this->_backup[i] = rhs.getBackupI(i)->clone();
		}
	return *this;
}

void		MateriaSource::learnMateria(AMateria *m) {
	if (m)
		for (int i = 0; i < 4; i++)
			if (!this->_backup[i]) {
				this->_backup[i] = m;
				return;
			}
	delete m;
	return;
}

AMateria	*MateriaSource::createMateria(const std::string &type) {
	for (int i = 4 - 1; i >= 0; i--)
		if (this->_backup[i] && this->_backup[i]->getType() == type)
			return this->_backup[i]->clone();
	return 0;
}

AMateria	*MateriaSource::getBackupI(const int index) const
{
	return this->_backup[index];
}
