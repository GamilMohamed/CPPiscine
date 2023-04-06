/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:10:19 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/05 17:56:05 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class GradeTooHighException;
class GradeTooLowException;
class Form
{
   private:
      std::string const		_name;
      bool					_status;
      const int				_sign;
      const int				_exec;
   public:
	const std::string	&getName( void ) const;
	const bool	&getStatus( void ) const;
	const int	&getSign( void ) const;
	const int	&getExec( void ) const;
	void  changeStatus( void );
	void  beSigned(Bureaucrat &bureau);
	Form(std::string name, int sign, int exec);
	Form(Form const &src);
	Form &operator=(Form const &src);
	~Form();
};

std::ostream &operator<<(std::ostream &nstream, Form &form);

#endif