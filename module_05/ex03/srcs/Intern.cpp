/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 05:40:59 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/06 06:25:52 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {
	if (!HIDEMSG) std::cout << "Intern constructor called" << std::endl; 

	_func[0] =  &Intern::makePresi;
	_func[1] =  &Intern::makeRobot;
	_func[2] =  &Intern::makeShrub;

	_str[0] = "President request";
	_str[1] = "Robotomy request";
	_str[2] = "Shrubbery request";
}

Intern::~Intern() { if (!HIDEMSG) std::cout << "Intern destructor called" << std::endl; }

Form *Intern::makeForm( std::string name, std::string target ){
	for (int i = 0; i < 3; i++)
	{
		if (name == _str[i])
		{
			std::cout << "Intern creates " + name << std::endl;
			return (this->*_func[i])(target);
		}
	}
	std::cout << "Wrong request !!" << std::endl;
	throw WrongException();
}


Intern::Intern(Intern const &src) {
	if (!HIDEMSG)
		std::cout << "Intern copy constructor called" << std::endl;
	*this = src;
}

Intern &Intern::operator=(Intern const &src) {
	if (!HIDEMSG)
		std::cout << "Intern assignment operator called" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		_str[i] = src._str[i];
		_func[i] = src._func[i];
	}
	return *this;
}

Form *Intern::makePresi( std::string target ) { return new PresidentialPardonForm(target); }
Form *Intern::makeRobot( std::string target ) { return new RobotomyRequestForm(target); }
Form *Intern::makeShrub( std::string target ) { return new ShrubberyCreationForm(target); }

