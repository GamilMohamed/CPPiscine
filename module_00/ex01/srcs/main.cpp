/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:00:02 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/20 20:16:02 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string toUpperCase(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	return str;
}

int	main(void)
{
	std::string input;
	PhoneBook book;

	std::cout << "Welcome to the PhoneBook" << std::endl;
	std::cout << "Please enter a command: " << std::endl;
	std::cout << "ADD, SEARCH, EXIT" << std::endl;
	while (getline(std::cin, input))
	{
		if (std::cin.eof())
			exit(0);
		input = toUpperCase(input);
		if (input == "ADD")
			book.addContact();
		else if (input == "SEARCH")
			book.searchContact();
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Invalid command" << std::endl;
		std::cout << "Please enter a command: " << std::endl;
		std::cout << "ADD, SEARCH, EXIT" << std::endl;
	}
	return 0;
}