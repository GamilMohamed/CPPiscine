/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:10:19 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/06 03:34:12 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat;
class Form
{
	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("Grade is too high");
		}
	};
	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("Grade is too low");
		}
	};

  private:
	std::string const _name;
	bool _status;
	const int _sign;
	const int _exec;

  public:
	Form(std::string name, int sign, int exec);
	Form(Form const &src);
	Form &operator=(Form const &src);
	virtual ~Form();

	const std::string &getName(void) const;
	const int &getSign(void) const;
	const int &getExec(void) const;
	const bool &getStatus(void) const;
	void changeStatus(void);

	void beSigned(Bureaucrat const &b);
	void execute(Bureaucrat const &bureau);
	virtual void execute_(void) const = 0;

  protected:
};

std::ostream &operator<<(std::ostream &nstream, Form &form);

#endif
