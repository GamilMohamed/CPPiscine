/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 01:45:31 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/14 01:52:05 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

void  WrongCat::makeSound( void ) const
{
   std::cout << "WrongCat have a strange sound" << std::endl;
}

WrongCat::WrongCat() : WrongAnimal()
{
   std::cout << "Default WrongCat constructor called" << std::endl;
   _type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal()
{
   std::cout << "Copy WrongCat constructor called" << std::endl;
   *this = src;
}

WrongCat::~WrongCat()
{
   std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
   std::cout << "WrongCat assignment operator called" << std::endl;
   _type = src._type;
   return *this;
}
