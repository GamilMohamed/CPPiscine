/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:28:02 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/06 03:32:32 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Colors.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void  success( std::string type, std::string name)
{

      if (type == "Presidential")
      {
         Bureaucrat success("okay", 3);
         std::cout << success << std::endl;
         PresidentialPardonForm formsuccess(name);
         formsuccess.beSigned(success);
         std::cout << formsuccess << std::endl;
         formsuccess.execute(success);
      }
      else if (type == "Robotomy")
      {
         Bureaucrat success("okay", 13);
         RobotomyRequestForm formsuccess(name);
         std::cout << success << std::endl;
         formsuccess.beSigned(success);
         std::cout << formsuccess << std::endl;
         formsuccess.execute(success);
      }
      else if (type == "Shrubbery")
      {
         Bureaucrat success("okay", 1);
         ShrubberyCreationForm formsuccess(name);
         std::cout << success << std::endl;
         formsuccess.beSigned(success);
         std::cout << formsuccess << std::endl;
         formsuccess.execute(success);
      }
}

void  failure( std::string type, std::string name)
{
      if (type == "Presidential")
      {
         Bureaucrat fail("failure", 27);
         std::cout << fail << std::endl;
         PresidentialPardonForm formfail(name);
         formfail.beSigned(fail);
         std::cout << formfail << std::endl;
         formfail.execute(fail);
      }
      else if (type == "Robotomy")
      {
         Bureaucrat fail("failure", 95);
         RobotomyRequestForm formfail(name);
         std::cout << fail << std::endl;
         formfail.beSigned(fail);
         std::cout << formfail << std::endl;
         formfail.execute(fail);
      }
      else if (type == "Shrubbery")
      {
         Bureaucrat fail("failure", 138);
         ShrubberyCreationForm formfail(name);
         std::cout << fail << std::endl;
         formfail.beSigned(fail);
         std::cout << formfail << std::endl;
         formfail.execute(fail);
      }
}
int main(void)
{
   /* PRESIDENTIAL */
   std::cout << BLUE << std::endl;
   std::cout << "\t██████  ██████  ███████ ███████ ██ ██████  ███████ ███    ██ ████████" << std::endl;
   std::cout << "\t██   ██ ██   ██ ██      ██      ██ ██   ██ ██      ████   ██    ██   " << std::endl; 
   std::cout << "\t██████  ██████  █████   ███████ ██ ██   ██ █████   ██ ██  ██    ██   " << std::endl; 
   std::cout << "\t██      ██   ██ ██           ██ ██ ██   ██ ██      ██  ██ ██    ██   " << std::endl; 
   std::cout << "\t██      ██   ██ ███████ ███████ ██ ██████  ███████ ██   ████    ██   " << std::endl; 
   std::cout << RESET << std::endl;
   
   try
   {
      success("Presidential", "MELENCHON");
      failure("Presidential", "MACRON");
      success("Presidential", "LE PEN");
   }
   catch(std::exception &e)
   {
      std::cout << e.what() << std::endl;
   }
   /* ROBOTOMY */
   std::cout << RED << std::endl;
   std::cout << "\t██████   ██████  ██████   ██████  ████████  ██████  ███    ███ ██    ██" << std::endl;
   std::cout << "\t██   ██ ██    ██ ██   ██ ██    ██    ██    ██    ██ ████  ████  ██  ██ " << std::endl; 
   std::cout << "\t██████  ██    ██ ██████  ██    ██    ██    ██    ██ ██ ████ ██   ████  " << std::endl; 
   std::cout << "\t██   ██ ██    ██ ██   ██ ██    ██    ██    ██    ██ ██  ██  ██    ██   " << std::endl; 
   std::cout << "\t██   ██  ██████  ██████   ██████     ██     ██████  ██      ██    ██   " << std::endl; 
   std::cout << RESET << std::endl;
                                                                      
   try
   {
      success("Robotomy", "CHATGPT");
      failure("Robotomy", "YAHOO");
      success("Robotomy", "GOOGLE");
   }
   catch(std::exception &e)
   {
      std::cout << e.what() << std::endl;
   }
   /* SHRUBBERY */
   std::cout << GREEN << std::endl;
   
   std::cout << "\t███████ ██   ██ ██████  ██    ██ ██████  ██████  ███████ ██████  ██    ██ " << std::endl;
   std::cout << "\t██      ██   ██ ██   ██ ██    ██ ██   ██ ██   ██ ██      ██   ██  ██  ██  " << std::endl;
   std::cout << "\t███████ ███████ ██████  ██    ██ ██████  ██████  █████   ██████    ████   " << std::endl;
   std::cout << "\t     ██ ██   ██ ██   ██ ██    ██ ██   ██ ██   ██ ██      ██   ██    ██    " << std::endl;
   std::cout << "\t███████ ██   ██ ██   ██  ██████  ██████  ██████  ███████ ██   ██    ██    " << std::endl;
   std::cout << RESET << std::endl;
   try
   {
      success("Shrubbery", "GRASS");
      failure("Shrubbery", "DIRT");
      success("Shrubbery", "TREE");
   }
   catch(std::exception &e)
   {
      std::cout << e.what() << std::endl;
   }
   return (0);
}
