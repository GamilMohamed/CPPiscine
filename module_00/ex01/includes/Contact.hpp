/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:07:38 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/21 01:19:14 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <stdlib.h>
# include <string.h>
# include <iomanip>

# define ERROR "\033[31minvalid field name\033[0m";

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void setFirstName(void);
		void setLastName(void);
		void setNickname(void);
		void setNumber(void);
		void setDarkestSecret(void);
		void sendLine(char i);
		void printInfos(void);
		int isAlphabetic(std::string str);
	private:
		std::string _phoneNumber;
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _darkestSecret;
};

#endif