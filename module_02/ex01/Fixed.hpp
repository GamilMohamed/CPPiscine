/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:21:22 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/26 04:30:49 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>



class Fixed
{
	private:
		int						_number;
		static	const int		_fracbits = 8;

	public:
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed & operator=(Fixed const &s);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed(Fixed const & a);
		Fixed(int const n);
		Fixed(float const f);
		Fixed();
		~Fixed();
};

std::ostream&  operator<<(std::ostream & o, Fixed const & rhs);

#endif