/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:28:18 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/11 00:50:24 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animals.hpp"

class Dog : public Animal
{
  public:
	Dog();
	Dog &operator=(Dog const &s);
	~Dog();
};

#endif