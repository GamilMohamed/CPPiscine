/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 07:47:44 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/22 12:42:16 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include "Colors.hpp"
# include <iostream>
# include <list>
# include <sstream>
# include <sys/time.h>
# include <vector>
# include <set>
# include <iomanip>


class PmergeMe
{
  private:
	std::vector<int> _vec;
	std::list<int> _list;
  public:
	typedef std::vector<int>::iterator it_vec;
	typedef std::vector<int>::const_iterator const_it_vec;
	typedef std::list<int>::iterator it_list;
	typedef std::list<int>::const_iterator const_it_list;
	PmergeMe( void ){};
	~PmergeMe( void ){};
	PmergeMe( const PmergeMe& rhs ):_vec(rhs._vec),_list(rhs._list){}
	PmergeMe &operator=( const PmergeMe &rhs );

	std::vector<int>& getVector(void) { return _vec; };
	std::list<int>& getList(void) { return _list; };

	void checkAndAdd( int ac, char **av );
	void MergeSort( it_vec first, it_vec last );
	void MergeSort( it_list first, it_list last );
};

template <class T>
std::ostream &operator<<(std::ostream & o, const std::vector<T> &vec)
{
	for (size_t i = 0; i < vec.size(); i++)
		o << vec[i] << " ";
	o << std::endl;
	return (o);
}

template <class T>
std::ostream &operator<<(std::ostream & o, const std::list<T> &list)
{
	typename std::list<T>::const_iterator it = list.begin();
	for (; it != list.end(); it++)
		o << *it << " ";
	o << std::endl;
	return (o);
}

#endif