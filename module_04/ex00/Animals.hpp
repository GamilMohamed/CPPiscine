/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 00:26:18 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/14 01:58:36 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALS_HPP
# define ANIMALS_HPP

# include <iostream>
# include <string>

class Animal
{
  protected:
	std::string _type;

  public:
	Animal();
	virtual ~Animal();
	virtual void makeSound() const;
	std::string getType() const;
};

#endif