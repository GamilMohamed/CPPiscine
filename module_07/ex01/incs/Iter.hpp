/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 23:23:43 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/12 01:09:35 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T> void iter (T *array, int length, void (*f)(T const &))
{
	for (int i = 0; i < length; i++) {
		f(array[i]);
	}
}

template <typename T> void print (T const &x)
{
    std::cout << x << " ";
}

template <typename T> void total (T const &x)
{
	static T total;

	total += x;
    std::cout << "total is " << total << "\n";
}

#endif      