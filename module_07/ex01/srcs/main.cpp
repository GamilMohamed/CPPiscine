/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:48:24 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/12 02:25:30 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include "Colors.hpp"
#include <iostream>
#include <string>

// class Awesome
// {
// 	public:
// 		Awesome( void ) : _n( 42 ) { return; }
// 		int get( void ) const { return this->_n; }
// 	private:
// 		int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void printr( T const & x ) { std::cout << x << std::endl; return; }
// int main() {
// 	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
// 	Awesome tab2[5];
// 	iter( tab, 5, printr );
// 	iter( tab2, 5, printr );
// 	return 0;
// }

int main(void)
{
	std::cout << GREEN << "Testing with int array" << RESET << std::endl;
	int array_int[] = { 0, 1, 2, 3, 4 };
	iter(array_int, 5, total);
	std::cout << std::endl;

	std::cout << BLUE << "Testing with char array" << RESET << std::endl;
	char array_char[] = { 'a', 'd', 'g', 'j', 'm' };
	iter(array_char, 5, print);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << MAGENTA << "Testing with string array" << RESET << std::endl;
	std::string array_string[] = { "Hello", "World", "!", "I", "am", "an",  "array", "of", "string" };
	iter(array_string, 9, total);
	std::cout << std::endl;

	std::cout << YELLOW << "Testing with float array" << RESET << std::endl;
	float array_float[] = { 0.1, 0.2, 0.3, 0.4, 0.5 };
	iter(array_float, 5, total);
	std::cout << std::endl;

	std::cout << CYAN << "Testing with double array" << RESET << std::endl;
	double array_double[] = { 0.01, 0.02, 0.03, 0.04, 0.05 };
	iter(array_double, 5, total);
	std::cout << std::endl;

	std::cout << RED << "Testing with long array" << RESET << std::endl;
	long array_long[] = { 1000000000000000000, 2000000000000000000, 3000000000000000000, 4000000000000000000, 5000000000000000000 };
	iter(array_long, 5, print);
	std::cout << std::endl;

	return (0);
}