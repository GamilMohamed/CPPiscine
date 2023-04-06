/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:28:02 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/05 23:58:20 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Colors.hpp"

#include "Bureaucrat.hpp"
#include "Form.hpp"

void  alpha( void ) //Default working Form
{
      std::cout << std::endl << "\033[1;31m" << "_____ALPHA_____" << "\033[0m" << std::endl;

      Bureaucrat test("Alpha", 2);
      Form formtest("Alphaform", 1, 1);
     // Form formtest("Alphaform", 0, 1);

      std::cout << test << std::endl;
      std::cout << formtest << std::endl;

      test.upgrade();
      formtest.beSigned(test);

      std::cout << formtest << std::endl;
}

void  beta( void ) //Signature ok, exec ko
{

      std::cout << std::endl << "\033[1;31m" << "_____BETA______" << "\033[0m" << std::endl;

      Bureaucrat test1("Beta", 149);
      Form  formtest1("Betaform", 150, 10);
      
      std::cout << test1 << std::endl;
      std::cout << formtest1 << std::endl;

      formtest1.beSigned(test1);

      std::cout << formtest1 << std::endl;
}

void  omega( void ) //grade too low
{
      std::cout << std::endl << "\033[1;31m" << "_____OMEGA_____" << "\033[0m" << std::endl;

      Bureaucrat test2("Omega", 42);
      Form formtest2("Omegaform", 10, 10);

      std::cout << test2 << std::endl;
      std::cout << formtest2 << std::endl;

      formtest2.beSigned(test2);
      
      std::cout << formtest2 << std::endl;
}

int main(void)
{
   try
   {
      alpha();
      beta();
      omega();
   }
   catch(std::exception &e)
   {
      std::cout << e.what() << std::endl;
   }
   return (0);
}
