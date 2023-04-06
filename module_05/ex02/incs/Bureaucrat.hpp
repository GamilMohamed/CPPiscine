/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 21:48:32 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/06 03:38:52 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
#include <stdexcept>
#include "Form.hpp"

#define HIDEMSG 1

class Form;

class Bureaucrat
{
   class GradeTooHighException : public std::exception
   {
         public:
            virtual const char* what() const throw()
            {
                return ("Grade is too high");
            }
   };
   class GradeTooLowException : public std::exception
   {
       public:
           virtual const char* what() const throw()
           {
               return ("Grade is too low");
           }
   };
   public:
       Bureaucrat(std::string name, int grade);
       Bureaucrat(Bureaucrat const &src);
       Bureaucrat &operator=(Bureaucrat const &src);
       ~Bureaucrat();

      const std::string & getName( void ) const;
      const int   & getGrade( void ) const;

      void  upgrade( void );
      void  downgrade( void );

      void  signForm(Form &form) const;
      void  executeForm(Form const &form) const;
   private:
      std::string const _name;
      int   _grade;
   protected:
};

std::ostream &operator<<(std::ostream &nstream, Bureaucrat &bureau);
#endif

