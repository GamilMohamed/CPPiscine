/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 06:32:32 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/01 20:37:35 by mgamil           ###   ########.fr       */
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

  public:

	Fixed getX( void ) const;
	Fixed getY( void ) const;

	Point (const float a, const float b);
	Point (const Point &src);
	Point& operator=(Point &s);

	Point();
	~Point();
};

std::ostream &operator<<(std::ostream &o, Point const &rhs);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif