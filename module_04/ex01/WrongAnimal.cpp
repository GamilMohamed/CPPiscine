/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 23:05:39 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/13 23:07:45 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
   std::cout << "Default WrongAnimal constructor called" << std::endl;
   _type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &s)
{
   std::cout << "Copy WrongAnimal constructor called" << std::endl;
   *this = s;
}

void  WrongAnimal::makeSound( void ) const
{
   std::cout << "WrongAnimal can't output a sound!" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
   return (_type);
}


WrongAnimal::~WrongAnimal()
{
   std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &s)
{
   std::cout << "WrongAnimal assignment operator called" << std::endl;
   _type = s._type;
   return *this;
}
