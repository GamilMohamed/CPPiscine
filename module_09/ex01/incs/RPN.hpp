/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 07:47:44 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/19 08:32:37 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <stack>

class RPN
{
	private:
		std::stack<int> _stk;
		int _add(int a, int b);
		int _substract(int a, int b);
		int _multiply(int a, int b);
		int _divide(int a, int b);
	public:
		int		(RPN::*ft[4])(int, int); // = {_add, _subtract, _multiply, _divide};
		int	operation(int a, int b, char op);
		std::stack<int> getStk( void ) { return _stk; };
		RPN( void );
		~RPN( void );
		RPN( RPN const & src );
		RPN & operator=( RPN const & rhs );
};
#endif