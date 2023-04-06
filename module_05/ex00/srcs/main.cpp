/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:08:30 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/05 16:08:43 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
   try
   {
      Bureaucrat jm("JM", 5);
      std::cout << jm << std::endl;
      jm.upgrade();
      jm.upgrade();
      jm.upgrade();
      jm.upgrade();
      // jm.upgrade();
      std::cout << jm << std::endl;
      Bureaucrat Maxou("Maxou", 148);
      std::cout << Maxou << std::endl;
      Maxou.downgrade();
      Maxou.downgrade();
      // Maxou.downgrade();
      std::cout << Maxou << std::endl;
      Bureaucrat Mouss("Mouss", -5);
      std::cout << Mouss << std::endl;
      
   }
   catch(std::exception &e)
   {
      std::cout << e.what() << std::endl;
   }
   return (0);
}
