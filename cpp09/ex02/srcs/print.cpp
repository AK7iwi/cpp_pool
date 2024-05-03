/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:27:53 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/03 16:02:02 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void PmergeMe::_print_before_sort(char **argv)
{
	std::cout << "Before: ";
	for (int i = 1; argv[i]; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl;
}

void	PmergeMe::_print_after_sort()
{	
	std::cout << "After: ";
	for (std::vector<std::pair<int, int> >::iterator it = _vector.begin(); it != _vector.end(); it++)
		std::cout << it->first << " ";
	std::cout << std::endl;
}

void	PmergeMe::_print_time_vector() 
{	
	std::cout	<< "Time to process with std::vector : " 
				<< _duration_vector 
				<< " us" 
				<< std::endl;
}

void	PmergeMe::_print_time_deque()
{
	std::cout	<<  "Time to process with std::deque : " 
				<< _duration_deque 
				<< " us" 
				<< std::endl;
}