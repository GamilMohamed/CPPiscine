/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:19:16 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/14 20:44:13 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=( Brain const &s )
{
	std::cout << "Copy assignement operator called" << std::endl;
	for (int i = 0; i < 100; i++)
	 	_ideas[i] = s.getIdeas(i);
	return (*this);
}

std::string Brain::getIdeas( int i ) const
{
	return (_ideas[i]);
}

Brain::Brain( const Brain &rhs )
{
	for (int i = 0; i < 100; i++)
	 	_ideas[i] = rhs.getIdeas(i);
	std::cout << "Brain Copy constructor operator called" << std::endl;
}
