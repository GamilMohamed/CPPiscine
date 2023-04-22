/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 23:23:40 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/22 18:46:19 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <string>

#include "Error.h"
# define SHOW 0

class BitcoinExchange: public std::map<std::string, float>
{
	private:
		std::map<std::string, float> _map;
	public:
		BitcoinExchange( void );
		~BitcoinExchange( void );
		BitcoinExchange( BitcoinExchange const & src );
		BitcoinExchange & operator=( BitcoinExchange const & rhs );
		void parse( std::string str );
		void print( void );
		float	getValue( std::string str );
		std::map<std::string, float> getMap( void ) { return _map;};

		// std:::map<std::string, float> add(std::string date, float value);
};

#endif