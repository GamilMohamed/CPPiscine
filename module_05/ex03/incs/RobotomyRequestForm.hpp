/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 00:07:18 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/06 02:24:32 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form
{
   public:
      RobotomyRequestForm(std::string name);
      RobotomyRequestForm(RobotomyRequestForm const &src);
      RobotomyRequestForm &operator=(RobotomyRequestForm const &src);
      virtual ~RobotomyRequestForm();
      //virtual std::string const &getName( void ) const;
      
      void  execute_( void ) const;
   private:
      std::string _target;
};

#endif
