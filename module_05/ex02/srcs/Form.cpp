/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 01:48:36 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/06 03:37:49 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Colors.hpp"

const int   & Form::getSign( void ) const {   return (_sign);}

const int   & Form::getExec( void ) const {   return (_exec);}

const bool & Form::getStatus( void ) const {   return (_status);}

const std::string & Form::getName( void ) const {   return (_name);}

void  Form::changeStatus( void ){ _status = true;}

void  Form::beSigned(Bureaucrat const &bureau) { bureau.signForm(*this); }

void  Form::execute(Bureaucrat const &bureau) { bureau.executeForm(*this); }

Form::Form(std::string name, int sign, int exec) : _name(name), _sign(sign), _exec(exec)
{
   if (!HIDEMSG)
      std::cout << "Form constructor called" << std::endl;
   if (sign < 1 || exec < 1)
      throw (Form::GradeTooHighException());
   else if (sign > 150 || exec > 150)
      throw (Form::GradeTooLowException());
   _status = false;
}

Form::Form(Form const &src) : _name(src._name), _sign(src._sign), _exec(src._exec)
{
   if (!HIDEMSG)
      std::cout << "Form copy constructor called" << std::endl;
   *this = src;
}

Form::~Form() {    if (!HIDEMSG) std::cout << "Form destructor called" << std::endl; }


Form &Form::operator=(Form const &src)
{
   if (!HIDEMSG)
      std::cout << "Form assignment operator called" << std::endl;
   _status = src._status;
   return *this;
}

std::ostream &operator<<(std::ostream &nstream, Form &form){
   nstream << BLUE << form.getName() << RESET << MAGENTA << "\nForm exec: " << form.getExec() << RESET << YELLOW << "\nForm status: " << RESET << (form.getStatus() ?  "\033[32mTRUE": "\033[31mFALSE") << RESET << RED << "\nForm sign: " << form.getSign() << RESET << std::endl;
   return (nstream);
}