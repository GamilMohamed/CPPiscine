/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 00:10:38 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/06 02:01:02 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Colors.hpp"
#include <cstdlib> 
#include <ctime> 
#include "RobotomyRequestForm.hpp"

void RobotomyRequestForm::execute_(void) const
{
	srand((unsigned int)time(NULL));
	std::cout << "⠀⢀⣤⡤⠤⠤⠤⠤⠤⠤⠤⠤⠤⢤⣤⡄⢠⣤⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⣼⣿⡇⣠⣤⣤⣤⣤⣤⣤⣤⡄⢸⣿⡇⢸⣿⡇⣿⣿⠀⣿⣿⣦⠀⣤⣤⣤⠀" << std::endl;
	std::cout << "⠀⢹⣿⣇⣉⣉⣉⣉⣉⣉⣉⣉⣁⣸⣿⡇⢸⣿⡇⠿⠿⠀⠛⠛⠉⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⠀⠉⠉⠙⠛⢿⣿⣿⣿⣿⡟⠛⠛⠛⠃⠈⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⠀⣾⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⠀⠀⠀⠀⠀⢀⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⠀⠀⠀⠀⠀⣼⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⠀⠀⠀⠀⠰⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⠀⠀⠀⠀⣤⣤⣤⣤⣤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⠀⢀⣶⣶⣿⣿⣿⣿⣿⣶⣶⣶⣶⣶⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⢀⣉⣉⣉⣉⣉⣉⣉⣉⣉⣉⣉⣉⣉⣉⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << "⠀⠘⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
	std::cout << " BZZZZZZZZZZzzzzZZZZZZzzZZZZZZZZZZz " << std::endl;
	rand() % 2 ? std::cout << _target << GREEN << " has been nicely robotomized." : std::cout << _target << RED << " has failed getting robotomized.";
	std::cout << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name)
	: Form("RobotomyRequestForm", 72, 45), _target(name)
{
	if (!HIDEMSG)
      std::cout << "Robotomy constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
	: Form(src)
{
	if (!HIDEMSG)
      std::cout << "Robotomy copy constructor called" << std::endl;
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	if (!HIDEMSG)
      std::cout << "Robotomy destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	if (!HIDEMSG)
      std::cout << "Robotomy assignment operator called" << std::endl;
	_target = src._target;
	return (*this);
}
