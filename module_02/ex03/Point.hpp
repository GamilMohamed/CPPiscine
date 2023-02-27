/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 06:32:32 by mgamil            #+#    #+#             */
/*   Updated: 2023/02/24 06:36:27 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
  private:
	const	Fixed _x;
	const	Fixed _y;
	int _number;
	static const int _fracbits = 8;

  public:
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);

	Point &operator=(Point const &s);
	Point &operator<<(Point const &chev);

	bool operator==(Point const &s);
	bool operator!=(Point const &s);
	bool operator>=(Point const &s);
	bool operator<=(Point const &s);
	bool operator>(Point const &s);
	bool operator<(Point const &s);

	Point operator+(Point const &val);
	Point operator-(Point const &val);
	Point operator/(Point const &val);
	Point operator*(Point const &val);

	Point operator++(int);
	Point operator--(int);

	Point &operator++();
	// static Point   &max(Point &first, Point &second);
	static Point &min(Point &first, Point &second);
	static Point &max(Point &first, Point &second);

	static const Point &min(Point const &first, Point const &second);
	static const Point &max(Point const &first, Point const &second);

	Point(Point const &a);
	Point(int const n);
	Point(float const f);
	Point();
	~Point();
};

std::ostream &operator<<(std::ostream &o, Point const &rhs);

#endif