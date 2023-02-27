/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:21:22 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/22 21:17:52 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
	int				_number;
	static	const int		_fracbits = 8;
	public:
		Fixed & operator=(Fixed const &s);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed(Fixed const & a);
		Fixed();
		~Fixed();
};

#endif