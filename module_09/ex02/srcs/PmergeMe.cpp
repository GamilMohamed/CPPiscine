/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 07:55:33 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/22 13:24:35 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe& PmergeMe::operator=(const PmergeMe& rhs)
{
	if (SHOW) std::cout << "PmergeMe assignement constructor called" << std::endl;
	_vec = rhs._vec;
	_list = rhs._list;
	return *this;
}

int	isNumeric( std::string nbr )
{
	return (nbr.find_first_not_of("0123456789") == std::string::npos);
}

void PmergeMe::checkAndAdd( int ac, char **av)
{
	int val;

	if (ac == 1)
		throw std::runtime_error("Error ! Use:\n./PmergeMe `shuf -i 1-100000 -n 3000 | tr \"\\n\" \" \"`");
	for (int i = 1; i < ac; i++)
	{
		std::stringstream ss(av[i]);
		if (!isNumeric(av[i]))
			throw std::runtime_error("Error");
		ss >> val;
		if (ss.fail())
			throw std::runtime_error("Error");
		_vec.push_back(val);
	}
}

void PmergeMe::MergeSort(it_vec first, it_vec last)
{
	if (last - first < 2)
		return ;
	it_vec mid(first + (last - first) / 2);
	MergeSort(first, mid);
	MergeSort(mid, last);
	std::inplace_merge(first, mid, last);
}

void PmergeMe::MergeSort(it_list first, it_list last)
{
	if (std::distance(first, last) < 2)
		return ;
	it_list mid(first);
	std::advance(mid, (std::distance(first, last) / 2));
	MergeSort(first, mid);
	MergeSort(mid, last);
	std::inplace_merge(first, mid, last);
}
