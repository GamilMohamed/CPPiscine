/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:14:22 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/22 13:06:03 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

unsigned long long getTime(void)
{
	timeval tv;
	gettimeofday(&tv, NULL);
	return (unsigned long long) tv.tv_sec * 100000000ULL + tv.tv_usec;
}

std::vector<int> VectorSort( int ac, char **av, PmergeMe & toSort )
{
	toSort.checkAndAdd(ac, av); // adding to Vector
	std::vector<int> copy(toSort.getVector()); // copy of Vector needed later
	// std::cout << "unsorted vector\t" << YELLOW << toSort.getVector() << RESET; // vector is unsorted
	toSort.MergeSort(toSort.getVector().begin(), toSort.getVector().end()); // sorting Vector
	// std::cout << "sorted vector\t" << GREEN << toSort.getVector() << RESET; // vector is sorted
	return copy;
}

void ListSort( std::vector<int> copy, PmergeMe & toSort )
{
	std::copy(copy.begin(), copy.end(), std::back_inserter(toSort.getList())); // copying args into lst
	// std::cout << "unsorted list\t" << YELLOW << toSort.getList() << RESET; // list is unsorted
	toSort.MergeSort(toSort.getList().begin(), toSort.getList().end()); // sorting List
	// std::cout << "sorted list\t" << GREEN << toSort.getList() << RESET; // list is sorted
}

int	main(int ac, char **av)
{
	unsigned long long	timeVec[2];
	unsigned long long	timeLst[2];
	double				total;

	try
	{
		PmergeMe toSort;
		timeVec[0] = getTime(); // start time Vector
		std::vector<int> copy = VectorSort(ac, av, toSort);
		timeVec[1] = getTime(); // end time Vector
		timeLst[0] = getTime(); // start time List
		ListSort(copy, toSort);
		timeLst[1] = getTime(); // end time list
		std::cout << "Before: " << copy;
		std::cout << "After: " << toSort.getVector();
		std::cout << std::fixed << std::setprecision(3);
		total = (timeVec[1] - timeVec[0]) / 100.0;
		std::cout << "Time to process a range of " << (ac - 1) << " elements with std::vector : " << total << " ms";
		total = (timeLst[1] - timeLst[0]) / 100.0;
		std::cout << std::endl;
		std::cout << "Time to process a range of " << (ac - 1) << " elements with std::list : " << total << " ms";
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
}
