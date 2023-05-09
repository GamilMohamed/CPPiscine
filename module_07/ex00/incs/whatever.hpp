/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 23:23:43 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/12 02:20:19 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template <class T> T max (T a, T b)		{
	return ((a > b) ? a : b);
}

template <class T> T min (T a, T b)		{
	return ((a < b) ? a : b);
}

template <class T> void swap (T a, T b)	{
    T tmp = a;
    a = b;
    b = tmp;
}

#endif