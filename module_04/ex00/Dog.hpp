/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:28:18 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/14 01:57:31 by mgamil           ###   ########.fr       */
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
	void makeSound() const;
	~Dog();
};

#endif