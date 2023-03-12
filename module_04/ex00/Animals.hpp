/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 00:26:18 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/10 23:53:02 by mgamil           ###   ########.fr       */
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
	~Animal();
	void makeSound() const;
	std::string getType() const;
};

#endif