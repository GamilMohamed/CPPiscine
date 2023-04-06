/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 00:07:33 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/06 02:44:13 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
{
   public:
      ShrubberyCreationForm(std::string name);
      ShrubberyCreationForm(ShrubberyCreationForm const &src);
      ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);
      virtual ~ShrubberyCreationForm();
      //virtual std::string const &getName( void ) const;

      void  execute_( void ) const;
   private:
      std::string _target;
};

#endif
