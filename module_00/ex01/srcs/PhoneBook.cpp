/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 04:21:37 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/21 04:35:36 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "Colors.hpp"

PhoneBook::PhoneBook(void)
{
	_total = 0;
	_index = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::searchContact() { int value; std::string str;
	if (!_total)
	{
		std::cout << BBLUE << "No contacts !" << RESET << std::endl;
		return ;
	}
	std::cout << BYELLOW << std::setw(11) << "index|" << BRED << std::setw(11) << "firstName|" << BBLUE <<  std::setw(11) << "lastName|" << BGREEN << std::setw(11) << "nickName|" << RESET << std::endl; 
	for (int i = 0; i < (_total <= 8 ? _total : 8); i++)
		_contact[i].sendLine(i + '0');

	std::cout << "Which one you need ?" << std::endl;
	while (getline(std::cin, str))
	{
		value = atoi(str.c_str());
		if (value <= _index && value >= 1)
			break ;
		std::cout << "Wrong number ! Try again" << std::endl;
	}
	if (std::cin.eof())
		exit (1);
	_contact[value - 1].printInfos();
}

void	PhoneBook::addContact() {
	_total += 1;
	_index = _index % 8;
	_contact[_index].setFirstName();
	_contact[_index].setLastName();
	_contact[_index].setNickname();
	_contact[_index].setNumber();
	_contact[_index].setDarkestSecret();
	_index++;
}
