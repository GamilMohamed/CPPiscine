/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 23:23:40 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/18 16:33:44 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include "Error.h"

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