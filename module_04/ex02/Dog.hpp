/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:28:18 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/14 20:39:44 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animals.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
  private:
	Brain*	_brain;
  public:
	Dog();
	Dog &operator=(Dog const &s);
	Dog(const Dog &rhs);
	void makeSound() const;
	~Dog();
};

#endif