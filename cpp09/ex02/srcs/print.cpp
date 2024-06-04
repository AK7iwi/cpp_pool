/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:27:53 by mfeldman          #+#    #+#             */
/*   Updated: 2024/06/04 10:36:34 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* Print methods */

void	PmergeMe::_print_time(double const time, std:: string &container)
{
	std::cout	<< "Time to process with "
				<< container 
				<< ": "
				<< time 
				<< " us"
				<< std::endl;
}

void PmergeMe::_print_before_sort(char **argv)
{
	std::cout << "Before: ";
	for (int i = 1; argv[i]; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl;
}