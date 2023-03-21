/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 23:05:54 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/14 02:00:33 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "Animals.hpp"

class WrongAnimal
{
  protected:
	std::string _type;
  public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(WrongAnimal const &src);
	WrongAnimal &operator=(WrongAnimal const &src);
	std::string getType(void) const;
	void makeSound(void) const;
};

#endif
