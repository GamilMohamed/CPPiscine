/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 04:28:39 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/21 04:36:05 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Colors.hpp"
#include <stdio.h>

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

int Contact::isAlphabetic(std::string str) {
    return str.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos;
}

void Contact::sendLine(char i)
{
	size_t len_f, len_l, len_n;
	
	len_f = strlen(_firstName.c_str());
	len_l = strlen(_lastName.c_str());
	len_n = strlen(_nickName.c_str());

	std::cout << IYELLOW <<  std::setw(10) << i - 47 << IMAGENTA << "|" << IRED;
	len_f <= 10 ? std::cout << std::setw(10) << _firstName : std::cout << _firstName.substr(0, 9).replace(9, 9, ".");
	std::cout << IMAGENTA << '|' << IBLUE;
	len_l <= 10 ? std::cout << std::setw(10) << _lastName : std::cout << _lastName.substr(0, 9).replace(9, 9, ".");
	std::cout << IMAGENTA << '|' << IGREEN;
	len_n <= 10 ? std::cout << std::setw(10) << _nickName : std::cout << _nickName.substr(0, 9).replace(9, 9, ".");
	std::cout << IMAGENTA <<  '|' << RESET << std::endl;
}

void Contact::printInfos(void)
{
	std::string copy(_darkestSecret); 
	std::cout << IRED << "Name is: " << _firstName << std::endl;
	std::cout << IBLUE << "Last name is: " << _lastName << std::endl;
	std::cout << IGREEN << "Nickname is: " << _nickName << std::endl;
	std::cout << ICYAN << "Number is: " << _phoneNumber << std::endl;
	std::cout << IWHITE << "darkest secret is: ";
	for (size_t i = 0; i < strlen(copy.c_str()); i++)
		std::cout << "*";
	std::cout << RESET << std::endl;
}

void Contact::setFirstName(void)
{
	std::string input;
	std::cout << RED << "Enter first name: " << RESET;
	while (getline(std::cin, input))
	{
		if (input.length() > 0 && isAlphabetic(input))
			break ;
		std::cout << IRED << "invalid first name" << RESET << std::endl;
		std::cout << "Enter first name: ";
	}
	if (std::cin.eof())
		exit(0);
	this->_firstName = input;
}

void Contact::setNumber(void)
{
	std::string input;
	std::cout << CYAN << "Enter phone number: " << RESET;
	while (getline(std::cin, input))
	{
		if (input.length() == 10 && !isAlphabetic(input))
			break ;
		std::cout << IRED << "invalid number!" << RESET << std::endl;
		std::cout << "Enter phone number: ";
	}
	if (std::cin.eof())
		exit(0);	
	this->_phoneNumber = input;
}


void Contact::setLastName(void)
{
	std::string input;
	std::cout << BLUE << "Enter last name: " << RESET;
	while (getline(std::cin, input))
	{
		if (input.length() > 0 && isAlphabetic(input))
			break ;
		std::cout << IRED << "invalid last name" << RESET << std::endl;
		std::cout << "Enter last name: ";
	}
	if (std::cin.eof())
		exit(0);	
	this->_lastName = input;
}

void Contact::setNickname(void)
{
	std::string input;
	std::cout << GREEN << "Enter nickname: " << RESET;
	while (getline(std::cin, input))
	{
		if (input.length() > 0)
			break ;
		std::cout << IRED << "field should not be empty!" << RESET << std::endl;
		std::cout << "Enter nickname: ";
	}
	if (std::cin.eof())
		exit(0);
	this->_nickName = input;
}

void Contact::setDarkestSecret(void)
{
	std::string input;
	std::cout << WHITE << "Enter darkest secret: " << RESET;
	while (getline(std::cin, input))
	{
		if (input.length() > 0)
			break ;
		std::cout << IMAGENTA << "We all have a darkest secret !!" << RESET << std::endl;
		std::cout << "Please tell us everything: ";
	}
	if (std::cin.eof())
		exit(0);
	this->_darkestSecret = input;
}
