/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 01:45:56 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/14 01:46:04 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
   public:
      WrongCat();
      WrongCat(WrongCat const &src);
      ~WrongCat();
      WrongCat &operator=(WrongCat const &src);
      void  makeSound( void ) const;
};

#endif
