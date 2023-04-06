/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 21:48:32 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/05 18:11:50 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

# include "Form.hpp" 
class Form;

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

class Bureaucrat
{
  private:
	const std::string _name;
	int _grade;
  public:
	const std::string &getName(void) const;
	const	int &getGrade(void) const;

	void upgrade(void);
	void downgrade(void);
	void  signForm(Form &form);

	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(Bureaucrat const &src);
	~Bureaucrat();
};

std::ostream &operator<<(std::ostream &nstream, Bureaucrat &bureau);

#endif