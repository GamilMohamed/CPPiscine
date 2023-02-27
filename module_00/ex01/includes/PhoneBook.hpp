/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 04:09:55 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/20 18:57:25 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <stdlib.h>
# include <string.h>
# include "Contact.hpp"


class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void addContact(void);
		void searchContact(void);
	private:
		int		_total;
		int 	_index;
		Contact _contact[8];
};

/*
01234565789 01234565789 01234565789
        nom|     prenom|   nicknam.|

*/

#endif