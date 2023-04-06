/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 00:10:38 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/06 03:36:37 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

void  PresidentialPardonForm::execute_( void ) const
{
   std::cout << _target << " have been forgiven by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form("PresidentialPardonForm", 25, 5), _target(name)
{
   if (!HIDEMSG)
      std::cout << "Presidential constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src)
{
   if (!HIDEMSG)
      std::cout << "Presidential copy constructor called" << std::endl;
   *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
   if (!HIDEMSG)
      std::cout << "Presidential destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
   if (!HIDEMSG)
      std::cout << "Presidential assignment operator called" << std::endl;
   _target = src._target;
   return *this;
}
