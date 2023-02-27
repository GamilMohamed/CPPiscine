/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:21:22 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/24 03:58:45 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed
{
  private:
	int _number;
	static const int _fracbits = 8;

  public:
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);

	Fixed &operator=(Fixed const &s);
	Fixed &operator<<(Fixed const &chev);

	bool operator==(Fixed const &s);
	bool operator!=(Fixed const &s);
	bool operator>=(Fixed const &s);
	bool operator<=(Fixed const &s);
	bool operator>(Fixed const &s);
	bool operator<(Fixed const &s);

	Fixed operator+(Fixed const &val);
	Fixed operator-(Fixed const &val);
	Fixed operator/(Fixed const &val);
	Fixed operator*(Fixed const &val);

	Fixed operator++(int);
	Fixed operator--(int);

	Fixed &operator++();
	// static Fixed   &max(Fixed &first, Fixed &second);
	static Fixed &min(Fixed &first, Fixed &second);
	static Fixed &max(Fixed &first, Fixed &second);

	static const Fixed &min(Fixed const &first, Fixed const &second);
	static const Fixed &max(Fixed const &first, Fixed const &second);

	Fixed(Fixed const &a);
	Fixed(int const n);
	Fixed(float const f);
	Fixed();
	~Fixed();
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif