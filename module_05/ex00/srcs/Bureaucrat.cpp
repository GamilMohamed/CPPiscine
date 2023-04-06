/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:07:25 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/05 15:54:45 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const std::string& Bureaucrat::getName( void )   const{      return (_name);   }
const int&         Bureaucrat::getGrade( void )  const{      return (_grade);  }

void  Bureaucrat::upgrade( void ){     if (--_grade < 1)    { throw GradeTooHighException(); }}
void  Bureaucrat::downgrade( void ){   if (++_grade > 150)  { throw GradeTooLowException();  }}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
   std::cout << "Bureaucrat constructor called" << std::endl;
   if (grade < 1)
      throw GradeTooHighException();
   if (grade > 150)
      throw GradeTooLowException();
   _grade = grade;
   std::cout << "Bureaucrat constructor complete" << std::endl << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name){
   std::cout << "Bureaucrat copy constructor called" << std::endl;
   *this = src;
}

Bureaucrat::~Bureaucrat(){
   std::cout << "Bureaucrat destructor called" << std::endl << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src){
   std::cout << "Bureaucrat assignment operator called" << std::endl;
   _grade = src._grade;
   return *this;
}

std::ostream &operator<<(std::ostream &nstream, Bureaucrat &bureau){
   nstream << bureau.getName() << ", bureaucrat grade " << bureau.getGrade() << ".";
   return (nstream);
}
