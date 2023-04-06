/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 05:41:25 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/06 06:24:39 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"

class Intern {
	class WrongException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("Wrong name");
		}
	};
	private:
	  std::string _str[3];
	  Form *(Intern::*_func[3])(std::string target);
	public:
	  Intern();
	  ~Intern();
	  Intern(Intern const &src);
	  Intern &operator=(Intern const &src);
	  Form *makePresi( std::string target );
	  Form *makeShrub( std::string target );
	  Form *makeRobot( std::string target );
	  Form *makeForm( std::string name, std::string target);
};

#endif