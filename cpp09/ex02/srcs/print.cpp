/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:27:53 by mfeldman          #+#    #+#             */
/*   Updated: 2024/06/03 21:33:47 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* Print methods */

void	PmergeMe::_print_time(double const time, char const *container)
{
	std::cout	<< "Time to process with "
				<< container 
				<< ": "
				<< time 
				<< " us"
				<< std::endl;
}

void	PmergeMe::_print_after_sort()
{	
	std::cout << "After: ";
	for (std::vector<std::pair<int, int> >::iterator it = _vector.begin(); it != _vector.end(); it++)
		std::cout << it->second << " ";
	std::cout << std::endl;
}

void PmergeMe::_print_before_sort(char **argv)
{
	std::cout << "Before: ";
	for (int i = 1; argv[i]; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl;
}