/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:27:27 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/30 20:07:35 by mfeldman         ###   ########.fr       */
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


static void parse_nb_sequence(char **argv)
{
	for (int i = 1; argv[i]; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]) && argv[i][j] != ' ')
				throw (std::invalid_argument("error: invalid character in input"));
		}
	}
}

void PmergeMe::sort(int argc, char **argv)
{
	try
	{
		parse_nb_sequence(argv);
	}
	catch (std::exception &e)
	{std::cerr <<  e.what() << std::endl;}
}