/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:21:18 by mgamil            #+#    #+#             */
/*   Updated: 2023/03/01 20:37:33 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// constructor

Point::Point (): _x(0), _y(0)
{}

Point::~Point()
{}

Point::Point (const float a, const float b): _x(a), _y(b)
{}

Point::Point (const Point &src): _x(src.getX()), _y(src.getY())
{
}

Fixed Point::getX() const
{
	return (this->_x);
}

Fixed Point::getY() const
{
	return (this->_y);
}



Point&	Point::operator=(Point &s)
{
	return (s);
}

