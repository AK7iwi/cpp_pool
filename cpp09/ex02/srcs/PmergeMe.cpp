/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:27:27 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/30 16:28:37 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &cpy)
{
}

PmergeMe::~PmergeMe() 
{}

PmergeMe&	PmergeMe::operator=(PmergeMe const &rhs) 
{	
	if (this != &rhs)
	{
	}
	return (*this);
}