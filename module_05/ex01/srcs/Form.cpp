/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:51:07 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/06 00:00:17 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Colors.hpp"

const bool&			Form::getStatus( void )	const { return (_status);	}
const int&			Form::getSign( void )	const { return (_sign);		}
const int&			Form::getExec( void )	const { return (_exec);		}
const std::string&	Form::getName( void )	const { return (_name);		}
void 			   	Form::changeStatus( void )	{ _status = true; }
void			   	Form::beSigned( Bureaucrat &b ){ b.signForm(*this);	}

Form::Form(std::string name, int sign, int exec) : _name(name), _sign(sign), _exec(exec) {
   std::cout << "Form constructor called" << std::endl;
   if (exec < 1 || sign < 1)
      throw (GradeTooHighException());
   else if (sign > 150 || exec > 150)
      throw (GradeTooLowException());
   _status = false;
}

Form::Form(Form const &src) : _name(src._name),  _sign(src._sign), _exec(src._exec) {
	std::cout << "Form copy constructor called" << std::endl;
   *this = src;
}

Form &Form::operator=(Form const &src){
   std::cout << "Form assignment operator called" << std::endl;
   _status = src._status;
   return *this;
}

Form::~Form() { std::cout << "Form destructor called" << std::endl; }

std::ostream &operator<<(std::ostream &nstream, Form &form){
   nstream << BLUE << form.getName() << RESET << BMAGENTA << "\nForm exec: " << form.getExec() << RESET << YELLOW << "\nForm status: " << RESET << (form.getStatus() ?  "\033[32mTRUE": "\033[31mFALSE") << RESET << BRED << "\nForm sign: " << form.getSign() << RESET << std::endl;
   return (nstream);
}